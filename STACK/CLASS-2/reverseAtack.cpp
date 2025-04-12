#include<bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &s, int element)
{
    if(s.empty())
    {
        s.push(element);
        return;
    }

    int topElement = s.top();
    s.pop();
    insertAtBottom(s, element);
    s.push(topElement);
    return;
}
void traverse(stack<int> &s)
{
    if(s.empty()) return;

    int topElement = s.top();
    s.pop();
    traverse(s);
    insertAtBottom(s, topElement);

    return;
}

void print(stack<int> &s)
{
    while(s.empty() == 0)
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}
int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    
    // cout << "Before printing" << endl;
    // print(s);

    //step01 -> traverse the stack
    //step 02 -> insert at bottom
    //step 03 -> print the sack 
    traverse(s);
    cout << "After printing" << endl;
    print(s);
    
    return 0;
}