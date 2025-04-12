#include<iostream>
#include<stack>
using namespace std;
void GetMid(stack<int>& s, stack<int> &temp, int element, int i, int &ans)
{
    if(i == element)
    {
        ans = s.top();
        return;
    }
    temp.push(s.top());
    s.pop();
    GetMid(s, temp, element, i + 1, ans);
    s.push(temp.top());
    temp.pop();
}
int main()
{
    stack<int> s;
    stack<int> temp;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    int size = s.size();
    int element = size / 2;
    int ans = -1;
    GetMid(s, temp, element, 0, ans);
    cout << ans;
    return 0;
}