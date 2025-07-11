#include<bits/stdc++.h>
using namespace std;
int main()
{
    // //creation
    // //by default max heap
    // priority_queue<int> pq;

    // //insert
    // pq.push(10);
    // pq.push(5);
    // pq.push(30);
    // pq.push(15);

    // //access top element
    // cout << pq.top() << endl;
    
    // //remove
    // pq.pop();

    // //access top element
    // cout << pq.top() << endl;

    // //size
    // cout << pq.size() << endl;

    // // pq.pop();
    // // pq.pop();
    // // pq.pop();

    // //check pq is empty or not
    // if(!pq.empty()) cout << "pq is not empty" << endl;
    // else cout << "pq is empty";

    //min heap
    //creation
    priority_queue<int, vector<int>, greater<int>> pq;

    //insert
    pq.push(10);
    pq.push(5);
    pq.push(30);
    pq.push(15);

    // access front element
    cout << pq.top() << endl;

    pq.pop();
    cout << pq.top() << endl;
     

    return 0;
}
