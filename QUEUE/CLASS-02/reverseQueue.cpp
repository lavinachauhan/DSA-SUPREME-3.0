#include<bits/stdc++.h>
using namespace std;
void reverse(queue<int> &q)
{
    stack<int> s;
    while(!q.empty())
    {
        s.push(q.front());
        q.pop();
    }
    while(!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
}

void reverseRecursion(queue<int> &q)
{
    if(q.empty()) return;
    int front = q.front();
    q.pop();
    reverseRecursion(q);
    q.push(front);
}

int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    // cout << "before reverse:" << endl;
    // while(!q.empty())
    // {
    //     cout << q.front() << " ";
    //     q.pop();
    // }
    // reverse(q);
    reverseRecursion(q);
    cout << "Queue after reverse:" << endl;
    while(!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
