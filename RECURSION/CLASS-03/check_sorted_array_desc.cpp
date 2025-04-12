#include<iostream>
using namespace std;

bool check_desc_sorted(int arr[], int size, int index)
{
    if(index == size)
    {
        return true;
    }
    if(arr[index] > arr[index - 1])
    {
        return false;
    }
    check_desc_sorted(arr, size, index+1);
}
int main()
{
    int arr[5] = {6,8,4,3,2};
    int size = 5;
    int index = 1;
    bool ans  = check_desc_sorted(arr, size, index);
    cout << ans;
    return 0;
}