#include<iostream>
#include<vector>
using namespace std;

void find_odd(int arr[], int size, int index, vector<int>&ans)
{
    if(index == size)
    {
        return;
    }
    if(arr[index] & 1)
    {
        cout << arr[index] << " ";
        ans.push_back(arr[index]);
    }
    find_odd(arr, size, index+1, ans);
}

int main()
{
    int arr[7] = {2,6,8,10,3,4,7};
    int size = 7;
    int index = 0;
    vector<int> ans;
    find_odd(arr, size, index, ans);
    cout << endl << "Printing of odd numbers stored in vector: " << endl;
    for(auto i : ans)
    {
        cout << i << " ";
    }

    return 0;
}