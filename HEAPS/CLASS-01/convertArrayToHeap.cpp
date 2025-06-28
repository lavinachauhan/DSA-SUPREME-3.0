#include<bits/stdc++.h>
using namespace std;
void print(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void heapify(int arr[], int size, int i)
{
    int largestIndex = i;
    int leftIndex = 2 * i + 1;
    int rightIndex = 2 * i + 2;

    if(leftIndex < size && arr[leftIndex] > arr[largestIndex])
    {
        largestIndex = leftIndex;
    }

    if(rightIndex < size && arr[rightIndex] > arr[largestIndex])
    {
        largestIndex = rightIndex;
    }

    if(largestIndex != i)
    {
        swap(arr[largestIndex], arr[i]);
        i = largestIndex;
        heapify(arr, size, i);
    }
}

void buildHeap(int arr[], int size)
{
    for(int i = size - 1; i >= 0; i--)
    {
        heapify(arr, size, i);
    }
}
int main()
{
    int arr[8] = {10, 20, 30, 40, 50, 60, 70, 80};
    int size = 8;
    cout << "Before heapify -> ";
    print(arr, 8);

    buildHeap(arr, size);

    cout << "After heapify -> ";
    print(arr, 8);

    return 0;
}