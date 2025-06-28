#include<bits/stdc++.h>
using namespace std;

class Nqueue{
    public:
    int *arr;
    int *next;
    int *front;
    int *rear;
    int freeSpot;
    int size;
    int numberOfQueue;

    Nqueue(int size, int numberOfQueue)
    {
        this -> size = size;
        this -> numberOfQueue = numberOfQueue;
        arr = new int[size];
        next = new int[size];
        front = new int[numberOfQueue];
        rear = new int[numberOfQueue];
        freeSpot = 0;

        for(int i = 0; i < size - 1; i++)
        {
            next[i] = i + 1;
        }
        next[size - 1] = -1;

        for(int i = 0; i < numberOfQueue; i++)
        {
            front[i] = -1;
            rear[i] = -1;
        }
    }

    bool push(int element, int qn)
    {
        if(freeSpot == -1)
        {
            cout << "Overflow -> ";
            return false; 
        }
        //step 01-> find index
        int index = freeSpot;

        //step 02-> update freespot
        freeSpot = next[index];

        //step 03-> update front OR link previous element to new element
        if(front[qn] == -1)
        {
            front[qn] = index;
        }
        else{
            next[rear[qn]] = index;
        }

        //step 04 -> update next
        next[index] = -1;

        //step 05 -> update rear
        rear[qn] = index;

        //step 06-> insert value
        arr[index] = element;

        return true;
    }

    int pop(int queueNumber)
    {
        int qn = queueNumber;
        int index = front[qn];
        front[qn] = next[index];
        next[index] = freeSpot;
        freeSpot = index;
        return arr[index];
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
    Nqueue q(10, 3);
    cout << q.push(10, 0) << endl;
    cout << q.push(40, 0) << endl;
    cout << q.push(20, 1) << endl;
    cout << q.push(30, 2) << endl;
    cout << q.push(50, 1) << endl;
    cout << q.push(60, 2) << endl;
    cout << q.push(70, 0) << endl;
    cout << q.push(100, 0) << endl;
    cout << q.push(80, 1) << endl;
    cout << q.push(90, 2) << endl;
    cout << q.push(110, 0) << endl;
    q.print();
    cout << "popped element -> " << q.pop(0);
    return 0;
}