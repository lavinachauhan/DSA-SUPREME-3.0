#include<iostream>
using namespace std;

class deque{
    private:
    int *arr;
    int size;
    int front;
    int rear;

    public:
    deque(int n)
    {
        arr = new int[n];
        this->size = n;
        front = -1;
        rear = -1;
    }

    void pushFront(int value)
    {
        //case 01-> overflow
        if(front == 0)
        {
            cout << "Overflow" << endl;
        }
        //case 02-> empty queue
        else if(front == -1 && rear == -1)
        {
            front++;
            rear++;
            arr[front] = value;
        }
        else{
            front--;
            arr[front] = value;
        }
    }

    void pushBack(int value)
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

    void popBack()
    {
        //case 01-> underflow
        if(rear == -1)
        {
            cout << "Underflow" << endl;
        }
        //case 02-> single element 
        else if(front == rear)
        {
            arr[rear] = -1;
            rear = -1;
            front = -1;
        }
        //case 03->normal case
        else{
            arr[rear] = -1;
            rear--;
        }
    }

    void popFront()
    {
        //case 01-> underflow
        if(front == -1 && rear == -1) 
        {
            cout << "underflow" << endl;
        }
        //case 02-> single element
        else if(front == rear)
        {
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        //case 03-> normal case
        else{
            arr[front] = -1;
            front++;
        }
    }

    void getFront()
    {
        //case 01-> queue is empty
        if(front == -1)
        {
            cout << "Queue is empty" << endl;
        }
        else{
            cout << "Front:" << arr[front] << endl;
        }
    }

    void getRear()
    {
          //case 01-> queue is empty
        if(rear == -1)
        {
          cout << "Queue is empty" << endl;
        }
        else{
            cout << "Rear:" << arr[rear] << endl;
        }
    }

    void getSize()
    {
        //case 01-> queue is empty
        if(front == -1 && rear == -1)
        {
            cout << "Size is:0"<< endl;
        }
        else{
            cout << "Size is:" << rear - front + 1 << endl;
        }
    }

    void isEmpty()
    {
        if(front == -1 && rear == -1)
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
    cin>> size;

    deque q(size);

    q.pushFront(30);
    q.print();
    q.pushBack(10);
    q.print();
    q.pushBack(20);
    q.print();
    q.pushFront(40);
    q.print();
    q.pushBack(40);
    q.print();
    q.pushBack(90);
    q.print();
    q.pushBack(100);
    q.print();
    
    q.getFront();
    q.getRear();
    q.getSize();
    q.isEmpty();
    
    q.popBack();
    q.print();
    q.popFront();
    q.print();
    q.popFront();
    q.print();
    q.popFront();
    q.print();
    q.popFront();
    q.print();
    q.popFront();
    q.print();
    // q.popBack();
    // q.print();
    // q.popBack();
    // q.print();
    // q.popBack();
    // q.print();
    // q.popBack();
    // q.print();
    // q.popBack();
    // q.print();



    return 0;
}