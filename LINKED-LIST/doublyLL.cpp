#include<iostream>
using namespace std;

class node{

    public:

    int data;
    node* prev;
    node* next;

    //constructor
    node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insert_at_head(node* &head, node* &tail,int value)
{
    //case 01 -> linked is empty
    if(head == NULL && tail == NULL)
    {
        node* newnode = new node(value);
        head = newnode;
        tail = newnode;
    }

    //case 02 -> linked list is not empty
    else{
        node* newnode = new node(value);
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
    }

}

void printList(node* &head)
{
    node* temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void insert_at_tail(node* &head, node* &tail, int value)
{
    //case 01 -> Linked list is empty
    if(head == NULL && tail == NULL)
    {   
        node* newnode = new node(value);
        head = newnode;
        tail = newnode;
    }
    //case 02 -> Linked list is not empty
    else{
        node* newnode = new node(value);
        newnode->prev = tail;
        tail->next = newnode;
        tail = newnode;
    }
}

void insert_at_position(node* &head, node* &tail, int position, int value, int size)
{
    if(position == 1)
    {
        insert_at_head(head, tail, value);
    }

    else if(position == size)
    {
        insert_at_tail(head, tail, value);
    }
    else{
    node* temp = head;
    for(int i = 0; i < position -2; i++)
    {
        temp = temp->next;
    }
    node* newnode = new node(value);
    newnode->next = temp->next;
    temp->next->prev = newnode;
    newnode->prev = temp;
    temp->next = newnode;
    }
}

int length(node* &head)
{
    int length = 0;
    node* temp = head;
    while(temp != NULL)
    {
        length++;
        temp = temp->next;
    }
    return length;
}

bool searching(node* &head, int target)
{
    node* temp = head;
    while(temp != NULL)
    {
        if(temp->data == target)
        {
            return true;
        }
        else{
            temp = temp->next;
        }
    }
    return false;
}

int findposition(node* &head, int target)
{
    int position = 1;
    node* temp = head;
    while(temp != NULL)
    {
        if(temp->data == target)
        {
            return position;
        }
        else{
            position++;
            temp = temp->next;
        }
    }
    return -1;
}

void deletion(node* &head, node* &tail, int position, int length)
{
    //case 01-> Linked list is empty
    if(head == NULL && tail == NULL)
    {
        cout << "linked list is empty" << endl;
    }
    //case 02-> position == 1 deletion of head node
    else if(position == 1)
    {
        node* nodetodelete = head;
        head = head->next;
        head->prev = NULL;
        nodetodelete->next = NULL;
        delete nodetodelete;
    }

    //case 03-> invalid positions
    else if(position < 0 || position > length)
    {
        cout << "Invalid positions" << endl;
    }

    //case 04-> deletion of tail node
    else if(position == length)
    {
        node* nodetodelete = tail;
        tail = nodetodelete->prev;
        tail->next = NULL;
        nodetodelete->prev = NULL;
        delete nodetodelete;
    }


    //case 05-> deletion of any middle node
    else{
    node* back = head;
    for(int i = 0; i < position-2; i++)
    {
        back = back->next;
    }
    node* curr = back->next;
    node* front = curr->next;
    back->next = front;
    front->prev = back;
    curr->next = NULL;
    curr->prev = NULL;
    delete curr;
    }
}

int main()
{

    node* head = NULL;
    node* tail = NULL;

    //creation of node

    // node* newnode = new node(20);
    // cout << newnode->data;

    //insertion at head

    insert_at_head(head, tail, 200);
    insert_at_head(head, tail, 100);
    printList(head);

    insert_at_tail(head,tail,300);
    insert_at_tail(head,tail,400);
    printList(head);

    int size = length(head);

    int position = 3;
    insert_at_position(head, tail, position,600, size);
    printList(head);
    size = length(head);

    // int target = 100;
    // bool ans = searching(head, target);
    // cout << ans << endl;

    // int index = findposition(head, target);
    // cout <<"1-> based indexing" << index;
    cout << "After deletion->" << endl;
    deletion(head, tail, 1, size);
    printList(head);
    return 0;
}