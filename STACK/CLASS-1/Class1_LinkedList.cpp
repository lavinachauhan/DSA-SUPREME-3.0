#include<iostream>
using namespace std;
class node{

    public:
    int data;
    node * next;
    node(int value)
    {
        this -> data = value;
        this -> next = NULL;
    }
};
class stack{
    public:
    node* top;
    int size;
    int track_top;

    stack(int capacity)
    {
        size = capacity;
        top = NULL;
        track_top = -1;
    }

    void push(int value)
    {
        //case01 -> stack is overflow
        track_top++;
        if(track_top == size)
        {
            cout << "Stack is Overflow" << endl;
        }
        //case 02-> stack have space
        else{
            node* newnode = new node(value);
            newnode -> next = top;
            top = newnode;
        }
    }
    void pop()
    {
        //case 01-> stack is underflow   
        if(top == NULL)
        {
            cout << "Stack is underflow" << endl;
        }
        //case 02-> stack have elements
        else{
            top = top -> next;
        }
    }

    int getSize()
    {
        int count = 0;
        node* temp = top;
        while(temp != NULL)
        {
            temp = temp -> next;
            count++;
        }
        return count;
    }

    bool isEmpty()
    {
        if(top == NULL) return true;
        else return false;
    }

    int getTop()
    {
        if(top == NULL)
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        else{
            return top -> data;
        }
    }

    void print()
    {
        cout << "Stack printing" << endl;
        node* temp = top;
        while(temp != NULL)
        {
            cout << temp -> data << " ";
            temp = temp -> next;
        }
        cout << endl;
    }
};


int main()
{
    cout << "Implement stack using linked list" << endl;
   
    stack s(5);
    s.push(20);
    s.print();
    s.push(30);
    s.print();
    s.push(40);
    s.print();
    s.push(50);
    s.print();
    s.push(60);
    s.print();
    s.push(60);
    s.print();

    cout << "Is empty -> " << s.isEmpty() << endl;
    cout << "Top element -> " << s.getTop() << endl;
    cout << "Size" << s.getSize() << endl;

    s.pop();
    s.print();

    s.pop();
    s.print();

    s.pop();
    s.print();  

    s.pop();
    s.print();  

    s.pop(); 

    s.pop();
  

    return 0;
}