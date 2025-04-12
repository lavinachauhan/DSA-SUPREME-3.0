#include<iostream>
#include<stack>
using namespace std;
void insertAtBottom(stack<int> &s, int value)
{
    if(s.empty() == 1)
    {
        s.push(value);
        return;
    }
    int topElement = s.top();
    s.pop();
    insertAtBottom(s, value);
    s.push(topElement);
    return;
}
int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    
    int value;
    cout << "Enter value to insert: ";
    cin >> value;

    insertAtBottom(s, value);

    //print stack
    while(s.empty() != 1)
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}