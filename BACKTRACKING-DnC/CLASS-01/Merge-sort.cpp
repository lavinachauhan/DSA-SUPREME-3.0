#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int s, int e, int mid)
{
    //make two array for mergeing
    int len_arr_1 = mid - s + 1;
    int len_arr_2 = e - mid;

    int * arr1 = new int[len_arr_1]; 
    int * arr2 = new int[len_arr_2]; 

    //copy values in arr1 and arr2

    int index = s;
    for(int i = 0; i < len_arr_1; i++)
    arr1[i] = arr[index++];

    index = mid + 1;

    for(int i = 0; i < len_arr_2; i++)
    arr2[i] = arr[index++];

    //ab merge krna hai

    index = s;
    int i = 0;
    int j = 0;

    while(i < len_arr_1 && j < len_arr_2)
    {
        if(arr1[i] < arr2[j])
        {
            arr[index] = arr1[i];
            i++;
        }
        else{
            arr[index] = arr2[j];
            j++;
        }
        index++;
    }

    while(i < len_arr_1)
    {
        arr[index++] = arr1[i];
        i++;
    }

    while(j < len_arr_2)
    {
        arr[index++] = arr2[j];
        j++;
    }
    delete arr1;
    delete arr2;
}

void divide(vector<int> &arr, int s, int e)
{
    //base case
    if(s >= e) return;

    int mid = s + (e - s) / 2;

    //left part
    divide(arr, s, mid);

    //right part
    divide(arr, mid + 1, e);

    //step 02 merge
    merge(arr, s, e, mid);
}



int main()
{
    vector<int> arr = {3,7,1,3,9,7,2,4,0,8};
    int s = 0;
    int e = arr.size() - 1;

    cout << "before" << endl;
    for(auto i : arr)
    {
        cout << i << " ";
    }

    divide(arr,s ,e);
    //step 01 make two equal parts
    //step 02 merge both part in sorted manner

    cout << "after" << endl;
    for(auto i : arr)
    {
        cout << i << " ";
    }


    return 0;
}