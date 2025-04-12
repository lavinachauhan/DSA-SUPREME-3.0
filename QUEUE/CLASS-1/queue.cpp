#include<iostream>
using namespace std;
class Queue{
    private:
        int *arr;
        int front;
        int rear;
        int size;

    public:
    Queue(int n)
    {
        arr = new int[n];
        front = -1;
        rear = -1;
        size = n;
    }

    void push(int value)
    {
        //case 01-> overflow
        if(rear == size - 1)
        {
            cout << "overflow" << endl;
        }
        //case 02-> empty queue
        else if(front == -1 && rear == -1)
        {
            front++;
            rear++;
            arr[rear] = value;
        }
        //case 03-> normal case
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
            front = -1;
            rear = -1;
        }
        //case 03->normal case
        else{
            arr[front] = -1;
            front++;
        }
    }

    void getFront()
    {
        if(front == -1)
        {
            cout << "Queue is empty";
        }
        else{
            cout <<"Front element: " << arr[front] << endl;
        }
    }

    void getRear()
    {
        if(rear == -1)
        {
            cout << "Queue is empty";
        }
        else{
            cout <<"Rear element: " << arr[rear] << endl;
        }
    }

    void getSize()
    {
        if(front == -1 && rear == -1) cout << "Size is :" << "0" << endl;
        else cout <<"Size is: " << rear - front + 1 << endl;
    }

    bool isEmpty()
    {
        if(front == -1 && rear == -1) return true;
        else return false;
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
    cout << "Enter the size:" << endl;
    cin >> size;
    Queue q(size);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    q.getSize();

    q.isEmpty();

    q.print();

    q.getRear();

    q.getFront();

    q.pop();
    q.print();
    q.pop();
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