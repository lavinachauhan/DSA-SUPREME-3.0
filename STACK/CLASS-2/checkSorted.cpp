#include<bits/stdc++.h> 
using namespace std;

bool check(stack<int> s, int ele1, int ele2, int count)
{
    if(count == 0) return true;
    if(ele2 < ele1)
    {
        ele1 = ele2;
        s.pop();
        if(s.empty()) return true;
        ele2 = s.top();
        return check(s, ele1, ele2, count - 1);
    }
    return false;
}
int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(90);
    s.push(40);
    s.push(50);
    int ele1 = INT_MAX;
    int ele2 = s.top();
    if(check(s, ele1, ele2, 5)) cout << "Stack is sorted";
    else cout << "Stack is not sorted";
    return 0;
}