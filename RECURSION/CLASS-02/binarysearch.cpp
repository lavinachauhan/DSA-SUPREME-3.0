#include<iostream>
using namespace std;

int binary_search(int arr[], int s, int e, int target)
{
    if(s > e)
    {
        return -1;
    }
    int mid = s+(e-s)/2;
    if(arr[mid] == target)
    {
        return mid;
    }
    if(arr[mid] > target)
    {
        binary_search(arr, s, mid - 1, target);    
    }
    else{
        binary_search(arr, mid + 1, e, target);    
    }
}
int main()
{
    int arr[5] = {5,4,8,9,10};
    int s = 0;
    int e = 4;
    int target = 11;
    int ans = binary_search(arr, s, e, target);
    cout << ans;
    return 0;
}