#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int place_pivot(vector<int> &arr, int s, int e)
{
    int count = 0;
    int pivot = arr[s];
   
    for(int i = s + 1; i <= e; i++)
    {
        if(arr[i] <= arr[s]) count++;
    }

    int pivot_index = s + count;
    swap(arr[s], arr[pivot_index]);

    //make sure left and right part elements
    int i = s;
    int j = e;

    while(i < j)
    {
        if(arr[i] < arr[pivot_index]){
            i++;
        }
        else{
            if(arr[j] > arr[pivot_index])
            {
                j--;
            }
            else{
                swap(arr[i++], arr[j--]);
            }
        }
    }

    return pivot_index;
}

void quick_sort(vector<int> &arr, int s, int e)
{
    //base case
    if(s >= e) return;

    int pivot_index = place_pivot(arr, s, e);
    //left part
    quick_sort(arr, s, pivot_index - 1);

    //right part
    quick_sort(arr, pivot_index + 1, e);
}


int main()
{
    vector<int> arr = {3, 5, 3, 1, 8, 7 ,5, 3};
    //pivot ko right place pr dalo
    cout << "before" << endl;
    for(auto i : arr)
    {
        cout << i << " ";
    }
    quick_sort(arr, 0, arr.size() - 1);

    cout << endl << "after" << endl;
    for(auto i : arr)
    {
        cout << i << " ";
    }

    //left aur right part bnao, make sure elements[left] < pivot and element[right] > pivot


    return 0;
}