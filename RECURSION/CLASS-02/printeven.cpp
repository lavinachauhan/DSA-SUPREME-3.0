#include<iostream>
#include<vector>
using namespace std;

void find_even(int arr[], int size, int index, vector<int>&ans)
{
    if(index == size)
    {
        return;
    }
    if (!(arr[index]&1))
    {
        cout << arr[index] << " ";
        ans.push_back(arr[index]);
    }
    find_even(arr, size, index+1, ans);
}


int main()
{
    int arr[8] = {1,5,6,23,34,56,78,90};
    int size = 8;
    int index = 0;
    vector<int> ans;
    find_even(arr, size, index, ans);
    cout << endl << "Printing of even numbers stored in vector: " << endl;
    for(auto num : ans)
    {
        cout << num << " ";
    }
    return 0;
}