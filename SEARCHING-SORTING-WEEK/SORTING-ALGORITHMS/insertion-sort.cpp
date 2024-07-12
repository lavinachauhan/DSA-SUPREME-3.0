#include<iostream>
using namespace std;

int main()
{
    int arr[10]={2,6,7,9,8,1,4,5,10,3};
    int n=10;
    for(int i=1;i<n;i++)
    {
        int j=i-1;
        int keyvalue=arr[i];

        while(j>=0 && arr[j]>keyvalue)
        {
            arr[j+1]=arr[j];
            j--;
        }

        arr[j+1]=keyvalue;
    }

    for(auto i:arr)
    {
        cout << i << " ";
    }


    return 0;
}