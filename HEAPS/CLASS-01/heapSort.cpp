#include<bits/stdc++.h>
using namespace std;
void heapify(int arr[], int e, int i)
{
    int largestIndex = i;
    int leftIndex = 2 * i;
    int rightIndex = 2 * i + 1;

    if(leftIndex < e && arr[leftIndex] > arr[largestIndex])
    {
        largestIndex = leftIndex;
    }
    if(rightIndex < e && arr[rightIndex] > arr[largestIndex])
    {
        largestIndex = rightIndex;
    }

    if(largestIndex != i)
    {
        swap(arr[largestIndex], arr[i]);
        i = largestIndex;
        heapify(arr, e, i);
    }
}

void print(int arr[], int size)
{
    for(int i = 1; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {-1, 80, 70, 60, 50, 30, 10, 40, 20};
    int size = 9;
    int e = size - 1;

    cout << "Before sorting -> ";
    print(arr, size);

    while(e > 1)
    {
        swap(arr[1], arr[e]);
        heapify(arr, e, 1);
        // for(int i = 1; i < size; i++) cout << arr[i] << " ";
        // cout << endl;  
        e--;
    }
    cout << "After sorting -> ";
    print(arr, size);
    return 0;
}