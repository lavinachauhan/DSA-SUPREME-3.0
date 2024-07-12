#include<iostream>
using namespace std;

int main()
{
    int arr[8]={90,30,70,60,50,10,100,20};
    int n=8;
    
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            //increasing order
            // if(arr[j]>arr[j+1])
            // {
            //     swap(arr[j],arr[j+1]);
            // }

            //decreasing order 
            if(arr[j]<arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }

    for(auto i:arr)
    {
        cout << i << " " ;
    }

    return 0;
}