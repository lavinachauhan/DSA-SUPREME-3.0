#include<iostream>
using namespace std;

void print_array(int *arr, int size)
{
    if(size == 0)
    {
        return;
    }
    cout << *arr << " ";
    print_array(arr+1, size - 1);
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    print_array(arr,5);
    return 0;
}