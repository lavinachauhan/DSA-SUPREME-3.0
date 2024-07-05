#include<iostream>
#include<queue>
using namespace std;

int main()
{
    //creation 
    queue<int> q;

    //member functions 

    //insertion 
    //01 -> push()
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    //02 -> front()
    cout << "Front element of queue is-> " << q.front() << endl;

    //03 -> back()
    cout << "Last element of queue is -> " << q.back() << endl;

    //04 -> size()
    cout << "Size of queue -> " << q.size() << endl;

    //05 -> empty()
    if(q.empty())
    {
    cout << "Queue is empty" << endl;
    }
    else{
        cout << "Queue is not empty" << endl;
    }

    //06 -> pop()

    cout << "First element before pop->" << q.front() << endl;
    q.pop();
    cout << "First element after pop->" << q.front() << endl;

    //07 -> swap()
    queue<int> first;
    queue<int> second;

    first.push(10);
    first.push(20);
    first.push(30);
    first.push(40);

    second.push(100);
    second.push(200);
    second.push(300);
    second.push(400);

    cout << "Front element of first queue before swap operation-> " << first.front() << endl;
    first.swap(second);
    cout << "Front element of first queue after swap operation-> " << first.front() << endl;

    










    return 0;
}