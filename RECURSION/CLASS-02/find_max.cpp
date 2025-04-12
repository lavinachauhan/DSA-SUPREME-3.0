#include<iostream>
#include<climits>
using namespace std;

void find_max(int arr[], int size, int index, int &maxi)
{
    if(index == size)
    {
        return;
    }
    maxi = max(maxi,arr[index]);
    find_max(arr,size,index+1,maxi);
}

int main()
{
    int arr[5] = {3,6,9,1,2};
    int size = 5;
    int maxi = INT_MIN;
    int index = 0;
    find_max(arr,size,index,maxi);
    cout << "Maximum element is: " << maxi;

    return 0;
}