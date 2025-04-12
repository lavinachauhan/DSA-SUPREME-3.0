#include<iostream>
using namespace std;

class circularDeque{
    private:
    int *arr;
    int size;
    int front;
    int rear;

    public:
    circularDeque(int n)
    {
        arr = new int[n];
        this-> size = n;
        front = -1;
        rear = -1;
    }

    void pushBack(int value)
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
        else if(front != 0 && rear == size - 1)
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
    void pushFront(int value)
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
            arr[front] = value;
        }
        //case 03-> circular case
        else if(front == 0 && rear != size - 1)
        {
            front = size - 1;
            arr[front] = value;
        }
        //case 04-> normal case
        else{
            front--;
            arr[front] = value;
        }
    }
    void popFront()
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
    void popBack()
    {
        //case 01-> underflow
        if(front == -1 && rear == -1)
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
        //case 03-> circular case
        else if(rear == 0)
        {
            arr[rear] = -1;
            rear = size - 1;
        }
        //case 04-> normal case
        else{
            arr[rear] = -1;
            rear--;;
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
            cout << "Front:" << arr[front] << endl;
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
            cout << "Rear:" << arr[rear] << endl;
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
        //case 01-> queue is empty
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
    cin >> size;
    circularDeque q(size);
    q.pushBack(10);
    q.print();
    q.pushBack(10);
    q.print();
    q.pushBack(10);
    q.print();
    // q.pushBack(10);
    // q.print();
    q.pushFront(20);
    q.print();
    q.pushFront(30);
    q.print();
    q.getSize();
    q.pushFront(30);
    q.print();
    q.getRear();
    q.getFront();
    q.getSize();
    q.popFront();
    q.print();
    q.popFront();
    q.print();
    q.isEmpty();
    q.popFront();
    q.print();
    q.getSize();
    // q.popFront();
    // q.print();
    q.popBack();
    q.print();
    q.popBack();
    
    q.print();
    q.popBack();
    q.print();

    return 0;
}
