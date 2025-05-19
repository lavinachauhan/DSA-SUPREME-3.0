#include<iostream>
using namespace std;

class Cqueue{
    private:
    int *arr;
    int size;
    int front;
    int rear;

    public:
    Cqueue(int n)
    {
        arr = new int[n];
        this->size = n;
        front = -1;
        rear = -1;
    }

    void push(int value)
    {
        //case 01-> overflow
        if((front == 0 && rear == size - 1) || rear == front - 1)
        {
            cout << "Overflow" << endl;
        }
        //case 02-> empty queue
        else if(front == -1 && rear == -1)
        {
            front++;
            rear++;
            arr[rear] = value;
        }
        //case 03-> circular case
        else if(rear == size - 1 && front != 0)
        {
            rear = 0;
            arr[rear] = value;
        }
        //case 04-> normal case
        else{
            rear++;
            arr[rear] = value;
        }
    }

    void pop()
    {
        //case 01-> underflow
        if(front == -1 && rear == -1)
        {
            cout << "Underflow" << endl;
        }
        //case 02-> single element
        else if(front == rear)
        {
            arr[front] = -1;
            rear = -1;
            front = -1;
        }
        //case 03-> circular case
        else if(front == size - 1)
        {
            arr[front] = -1;
            front = 0;
        }
        //case 04-> normal case
        else{
            arr[front] = -1;
            front++;
        }
    }

    void getFront()
    {
        //case 01-> queue is empty
        if(front == -1 && rear == -1)
        {
            cout << "Queue is empty" << endl;
        }
        else{
            cout << "Front element:" << arr[front] << endl;
        }
    }

    void getRear()
    {
        //case 01-> queue is empty
        if(front == -1 && rear == -1)
        {
            cout << "Queue is empty" << endl;
        }
        else{
          cout << "Rear element:" << arr[rear] << endl;
        }
    }

    void getSize()
    {
        //case 01-> queue is empty
        if(front == -1 && rear == -1)
        {
            cout << "Size is: 0" << endl;
        }
        //case 02-> single element
        else if(front == rear)
        {
            cout << "Size is: 1" << endl;
        }
        //case 03-> front < rear
        else if(front < rear)
        {
            cout << "Size is:" << rear - front + 1 << endl;
        }
        //case 04-> front > rear
        else{
            cout << "Size is:" << size - front + rear + 1 << endl;
        }
    }

    void isEmpty()
    {
        if(rear == -1 && front == -1)
        {
            cout << "Queue is empty" << endl;
        }
        else{
            cout << "Queue is not empty" << endl;
        }
    }

    void print()
    {
        for(int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    int size;
    cout << "Enter the size:";
    cin >> size;
    Cqueue q(size);
    q.push(10);
    q.print();
    q.push(20);
    q.print();
    q.push(30);
    q.print();
    q.push(40);
    q.print();
    q.push(50);
    q.print();
    q.getSize();
    q.push(60);
    q.print();

    q.pop();
    q.pop();
    q.print();
    q.push(60);
    q.print();
    q.getSize();
    q.pop();
    q.print(); 
    q.pop();
    q.print(); 
    q.pop();
    q.print();
    q.pop();
    q.print();
    q.pop();
    q.print();
    
    return 0;
}