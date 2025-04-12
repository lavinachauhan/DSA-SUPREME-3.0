#include<iostream>
using namespace std;
class stack{
    public:
    int* arr;
    int size;
    int top;

    stack(int capacity)
    {
        arr = new int[capacity];
        this-> size = capacity;
        top = -1;
    }

    void push(int value)
    {
        //case 1-> overflow(stack is full)
        if(top == size - 1)
        {
            cout << "Stack is overflow" << endl;
        }
        //case 2-> stack in not full
        else{
            top++;
            arr[top] = value;
        }
    }

    void pop()
    {
        //case 01-> stack is empty, underflow
        if(top == -1)
        {
            cout << "Stack is underflow" << endl;
        }
        //case 02-> stack is not empty
        else{
            arr[top] = -1;
            top--;
        }
    }

    int getSize()
    {
        return top + 1;
    }

    bool isEmpty()
    {
        if(top == -1)
        {
            return true;
        }
        else{
            return false;
        }
    }

    int getTop()
    {
        //case 01-> stack is empty
        if(top == -1)
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return arr[top];
    }

    void print()
    {
        cout << "Printing stack" << endl;
        for(int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    cout << "STACK IMPLEMENTATION USING ARRAY" << endl;
    stack s(5);
   
    s.print();
    s.push(10);
    s.print();
    s.push(20);
    s.print();
    s.push(30);
    s.print();
    s.push(40);
    s.print();
    s.push(50);
    s.print();
    s.push(60);
    cout << "Size of stack: " << s.getSize() << endl;
    cout << "Top element :" << s.getTop() << endl;
    cout << "isEmpty :" << s.isEmpty() << endl;
    s.pop();
    s.print();
    s.pop();
    s.print();
    s.pop();
    s.print();
    s.pop();
    s.print();
    s.pop();
    s.print();
    s.pop();


    return 0;
}