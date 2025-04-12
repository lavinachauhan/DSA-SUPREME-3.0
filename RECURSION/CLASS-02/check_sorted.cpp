#include<iostream>
using namespace std;

bool check_sorted(int arr[], int size, int index)
{
    if(index == size)
    {
        return true;
    }
    if(arr[index] > arr[index-1])
    {
        return false;
    }
    check_sorted(arr, size, index+1);
}

int main()
{
    int arr[5] = {0,4,3,2};
    int size = 4;
    int index = 1;
    cout << check_sorted(arr,size, index);
}