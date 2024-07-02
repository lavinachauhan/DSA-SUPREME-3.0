#include<iostream>
#include<stack>
using namespace std;

int main()
{
    //creation 
    stack<int> s;

    //member function
    //insertion 

    //01 -> push()
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    //02 -> top()

    cout << "Top or first element of stack-> " << s.top() << endl;

    //03 -> empty()
    if(s.empty())
    {
        cout << "Stack is empty" << endl;
    }
    else{
        cout << "Stack is not empty" << endl;
    }

    //04 -> pop()
    cout << "Top or first element of stack before pop operation -> " << s.top() << endl;
    s.pop();
    cout << "Top or first element of stack before pop operation -> " << s.top() << endl;

    //05 -> size()
    cout << "Size of -> " << s.size() << endl;

    //06 ->swap()
    stack<int> st;
    st.push(100);
    st.push(200);
    st.push(300);
    st.push(400);
    st.push(500);

    cout << "Top element of st stack before swap -> " << st.top() << endl;
    s.swap(st);
    cout << "Top element of st stack before swap -> " << st.top() << endl;









    return 0;
}