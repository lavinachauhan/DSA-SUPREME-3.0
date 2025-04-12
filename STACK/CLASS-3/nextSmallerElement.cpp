#include<bits/stdc++.h>
using namespace std;

void solve(int arr[], int n, vector<int> &ans)
{
    stack<int> s;
    s.push(-1);
    for(int i = n - 1; i >= 0; i--)
    {
        int element = arr[i];
        while(s.top() >= element) s.pop();
        ans.push_back(s.top());
        s.push(element);
    }
}

int main()
{
    int arr[] = {5,4,3,2,1};
    vector<int> ans;
   
    solve(arr, 5, ans);

    reverse(ans.begin(), ans.end());

    cout << "Anser array is:" << endl;
    for(auto i : ans)
    {
        cout << i << " ";
    }
    return 0;
}