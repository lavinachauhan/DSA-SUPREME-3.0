#include<iostream>
using namespace std;
class Nstack{
    public:
    int *arr;
    int *next;
    int *top;
    int size;
    int m;
    int freeSpot;

    Nstack(int arrSize, int NoOfStack)
    {
        this -> size = arrSize;
        this -> m = NoOfStack;
        arr = new int[size];
        next = new int[size];
        top = new int[m];
        freeSpot = 0;

        for(int i = 0; i < size - 1; i++)
        {
            next[i] = i + 1;
        }
        next[size - 1] = -1;

        for(int i = 0; i < m; i++)
        {
            top[i] = -1;
        }
    }

    bool push(int value, int stackNumber)
    {
        if(freeSpot == -1)
        {
            cout << "Overflow";
            return false;
        }

        //step 01 find index
        int index = freeSpot;

        //step 02 update freeSpot
        freeSpot = next[index];

        //step 03 insert value at index
        arr[index] = value;

        //step 04 update next
        next[index] = top[stackNumber - 1];

        //step 05 update top
        top[stackNumber - 1] = index;

        return true;
    }

    int pop(int stackNumber)
    {
        if(top[stackNumber - 1] == -1) return -1;
        int index = top[stackNumber - 1];
        top[stackNumber - 1] = next[index];
        int poppedElement = arr[index];
        next[index] = freeSpot;
        freeSpot = index;
        return poppedElement;
    }

    void print()
    {
        for(int i = 0; i < size; i++) cout << arr[i] << " ";
    }
};
int main()
{
    Nstack n(10, 3);
    cout << n.push(10, 1) << endl;
    cout << n.push(20, 3) << endl;
    cout << n.push(30, 1) << endl;
    cout << n.push(40, 2) << endl;
    cout << n.push(50, 3) << endl;
    cout << n.push(60, 1) << endl;
    cout << n.push(70, 2) << endl;
    cout << n.push(80, 1) << endl;
    cout << n.push(90, 2) << endl;
    cout << n.push(100, 3) << endl;
    cout << n.push(110, 1) << endl;
    n.print();
    cout << endl << "Popped element ->" << n.pop(2);
    return 0;
}