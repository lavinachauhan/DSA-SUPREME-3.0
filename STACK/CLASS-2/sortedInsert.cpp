#include<bits/stdc++.h>
using namespace std;

void insert(stack<int> &s, int value)
{
    if(s.empty()) 
    {
        s.push(value);
        return;
    }
    if(!s.empty() && s.top() < value)
    {
        s.push(value);
        return;
    }
    int topElement = s.top();
    s.pop();
    insert(s, value);
    s.push(topElement);
}

int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    int value;
    cout << "Enter value to insert" << endl;
    cin>> value;

    insert(s, value);

    while(!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}