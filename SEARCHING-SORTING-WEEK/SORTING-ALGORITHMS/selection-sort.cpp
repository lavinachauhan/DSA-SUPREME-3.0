#include<iostream>
using namespace std;

int main()
{
    int arr[10]={2,4,5,6,3,9,8,7,10,1};
    int n=10;
    for(int i=0;i<n-1;i++)
    {
        int minindex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minindex])
            {
                minindex=j;
            }
        }
        swap(arr[minindex],arr[i]);
    }

    for(auto i:arr)
    {
        cout << i << " ";
    }
    return 0;
}