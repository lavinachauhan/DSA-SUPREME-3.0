#include<iostream>
using namespace std;

class mynode{

    public:
    int data;
    mynode* next;

    //constructor
    mynode(int value)
    {
        this-> data = value;
        this-> next = NULL;
    }
};

void insert_at_head(int value, mynode* &head,mynode* &tail)
{
    if(head == NULL && tail == NULL)
    {
        mynode* newnode = new mynode(value);
        head = newnode;
        tail = newnode;
    }
    else{
        mynode* newnode = new mynode(value);
        newnode->next = head;
        head = newnode;
    }
}

void insert_at_tail(int value, mynode* &head, mynode* &tail)
{
    if(head == NULL && tail == NULL)
    {
        mynode* newnode = new mynode(value);
        head = newnode;
        tail = newnode;   
    }
    else{
        mynode* newnode = new mynode(value);
        tail->next = newnode;
        tail = newnode;
    }
}

void insert_at_position(int position, int &length, int value, mynode* &head, mynode* &tail)
{
    mynode* temp = head;
    if(position == 1)
    {
        //insertion at head
        insert_at_head(value,head,tail);
    }
    else if(position == length+1)
    {
        insert_at_tail(value,head,tail);
    }
    else{
    for(int i = 0; i < position-2; i++)
    {
        temp = temp->next;
    }
    mynode* newnode = new mynode(value);
    newnode-> next = temp->next;
    temp-> next =newnode;
    }
}

void print(mynode* &head)
{
    mynode* temp = head;
    while(temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int getlength(mynode* &head)
{
    mynode* temp = head;
    int length = 0;
    {
        while(temp != NULL)
        {
            length++;
            temp = temp-> next;
        }
    }
    return length;
}

bool search(mynode* &head, int target)
{
    mynode* temp = head;

    while(temp != NULL)
    {
        if(temp->data == target)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int searching(mynode* &head, int &target)
{
    mynode* temp = head;
    int pos=0;
    while(temp != NULL)
    {
        if(temp-> data == target)
        {
        return pos;
        }
        else{
            pos++;
            temp = temp->next;
        }
    }
    return -1;
}

void deletionbyposition(mynode* &head, mynode* &tail, int position, int length)
{
    //case-> 01 Linked list is empty
    if(head == NULL && tail == NULL )
    {
        cout << "Linked list is empty" << endl;
    }
    //case-> 02 position == 1 deletion of head node
    else if(position == 1)
    {
        mynode* nodetodelete = head;
        head = head->next;
        if(head == NULL)
        {
            tail = NULL;
        }
        nodetodelete->next = NULL;
        delete nodetodelete;
    }
    //case-> 03 invalid position
    else if(position > length || position < 1)
    {
        cout << "Invalid position" << endl;
    }
   
    //case-> 04 deletion of tail node or last node

    else if(position == length)
    {
        mynode* temp = head;
        for(int i = 0; i < position-2; i++)
        {
            temp = temp->next;
        }
        mynode* nodetodelete = tail;
        tail = temp;
        temp->next = NULL;
        delete nodetodelete;

    }
    //case-> 05 deletion of middle nodes
    else{
    mynode* temp = head;
    for(int i = 0; i < position-2; i++)
    {
        temp = temp->next;
    }
    mynode* nodetodelete = temp->next;
    mynode* forwardnode = nodetodelete->next;
    temp->next = forwardnode;
    nodetodelete->next = NULL;
    delete nodetodelete;
    }
}

int deletionbyvalue(mynode* &head, mynode* &tail,int value, int length)
{
    mynode* temp = head;
    int position = 1;
    while(temp != NULL)
    {
        if(temp->data != value)
        {   
            position++;
            temp = temp->next;
        }
        else{
            return position;
        }
    }
    return position;
}

int main()
{
    //creation of node
    //mynode* newnode = new mynode(10);
    //cout << newnode->data << endl;

    //creation of linked list

    mynode* head=NULL;
    mynode* tail=NULL;

    //01-> insertion at head
    insert_at_head(10,head,tail);
    //print(head);

    insert_at_head(11,head,tail);
    //print(head);

    insert_at_head(12,head,tail);
   // print(head);

   // insert_at_head(13,head,tail);
   // print(head);

    insert_at_head(14,head,tail);
    //print(head);
    //cout << "Linked list after head insertion->" << endl;
    //print(head);

   // cout << "Linked list after tail insertion->" << endl;

    //02-> insertion at tail 
    //insert_at_tail(15,head,tail);
   // insert_at_tail(16,head,tail);
   // insert_at_tail(17,head,tail);
   // insert_at_tail(18,head,tail);
   // insert_at_tail(19,head,tail);
    //print(head);

    //length of linked list

    int length = getlength(head);

    //cout << "Length of Linked List-> " << length << endl;

    // 03-> insert at position 
    insert_at_position(4, length, 100, head, tail);
    print(head);

   length = getlength(head);

    //04-> searching of element in linked list
    //  int target;
    //  cout << "Enter the target element to search" << endl;
    //  cin >> target;
    // bool ans = search(head,target);

    // cout << "Element found or not-> " << ans << endl;

    // int targetindex = searching(head, target);
    // cout << "Position of target element based on zero based indexing -> " << targetindex << endl;

   // deletionbyposition(head,tail,5, length);
   // print(head);

    int value = 3;
    int pos = deletionbyvalue(head, tail, value, length);
    deletionbyposition(head,tail,pos, length);
    print(head);
    return 0;
}