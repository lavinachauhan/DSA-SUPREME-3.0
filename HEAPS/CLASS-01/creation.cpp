#include<bits/stdc++.h>
using namespace std;

class heaps{
    public:
    int *arr;
    int capacity;
    int index;

    heaps(int capacity)
    {
        this -> capacity = capacity;
        arr = new int[capacity];
        index = 0;

        // this loop is only for avoiding garbage value
        //because after every insertion we print array to check elements are in their right position or not
        // for(int i = 0; i < capacity; i++)
        // {
        //     arr[i] = 0;
        // }
    }

    void push(int element)
    {
        if(index == capacity - 1)
        {
            cout << "overflow" << endl;
            return;
        }
        index++;
        arr[index] = element;

        //place element at its right position
        int currentIndex = index;

        while(currentIndex > 1)
        {
            int parentIndex = currentIndex / 2;

            if(arr[parentIndex] < arr[currentIndex])
            {
                swap(arr[parentIndex], arr[currentIndex]);
            }
            currentIndex = parentIndex;
        }
    }

    void heapify(int *arr, int size, int i)
    {
        int largestIndex = i;
        int leftIndex = 2 * i;
        int rightIndex = 2 * i + 1;

        if(leftIndex < size && arr[leftIndex] > arr[largestIndex]) largestIndex = leftIndex;
        if(rightIndex < size && arr[rightIndex] > arr[largestIndex]) largestIndex = rightIndex;

        if(largestIndex != i)
        {
            swap(arr[largestIndex], arr[i]);
            i = largestIndex;
            heapify(arr, size, i);
        }
    }

    void remove()
    {
        //step 01-> swap index 1 element from last index element
        //last index is capacity - 1;
        int i = 1;
        int index = capacity - 1;
        swap(arr[i], arr[index]);

        //step 02-> decrement index, or size to remove the element
        index--;
        capacity--;

        //step 03-> heapify the element at arr[1] (Inshort place it in its right position)
        heapify(arr, index, i);
    }

    void print()
    {
        for(int i = 1; i < capacity; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    heaps h1(9);
    h1.push(70);
    h1.print();

    h1.push(80);
    h1.print();

    h1.push(10);
    h1.print();

    h1.push(20);
    h1.print();

    h1.push(30);
    h1.print();

    h1.push(60);
    h1.print();

    h1.push(40);
    h1.print();

    h1.push(50);
    h1.print();

    h1.remove();
    h1.print();

    h1.remove();
    h1.print();
    return 0;
}
