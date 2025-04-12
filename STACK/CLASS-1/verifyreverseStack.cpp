#include<iostream>
#include<stack>
using namespace std;
int main()
{
    string name = "Lavina";
    stack<char> s;
    int i = 0;
    while(i < name.size())
    {
        s.push(name[i]);
        i++;
    }
    while(s.empty() != 1)
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}