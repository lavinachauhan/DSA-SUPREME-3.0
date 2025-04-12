#include<iostream>
#include<climits>
using namespace std;

void find_min(int arr[], int size, int index, int &mini)
{
    if(index == size)
    {
        return;
    }
    mini = min(mini, arr[index]);
    find_min(arr, size, index+1, mini);
}

int main()
{
    int arr[5] = {1,5,9,7,0};
    int size = 5;
    int index = 0;
    int mini = INT_MAX;
    find_min(arr,size,index,mini);
    cout << "Minimum element is: " << mini;
    return 0;
}