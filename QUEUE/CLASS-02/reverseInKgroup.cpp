#include<bits/stdc++.h>
using namespace std;
void reverseGroups(queue<int> &q, int currSize, int k)
{
    if(currSize >= k)
    {
        //reverse first k elements of queue, using stack
        stack<int> s;
        int i = k;
        while(i--)
        {
            s.push(q.front());
            q.pop();
        }
        while(!s.empty())
        {
            q.push(s.top());
            s.pop();
        }
        reverseGroups(q, currSize - k, k);
    }
    else{
        //pop() front element and push again in queue
        while(currSize--)
        {
            int front = q.front();
            q.pop();
            q.push(front);
        }
    }
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
    q.push(70);
    q.push(80);
    q.push(90);
    q.push(100);
    q.push(110);
    int k = 3;
    int currSize = q.size();
    reverseGroups(q, currSize, k);

    cout << "After reverse:" << endl;
    while(!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}