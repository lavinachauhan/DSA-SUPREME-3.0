#include<iostream>
#include<queue>

using namespace std;
int main()
{

    priority_queue<int> maxheap;
    //max heap
    priority_queue<int,vector<int>,greater<int>> minheap;
    //min heap


    //member functions

    //insertion 
    //01-> push()
    maxheap.push(10);
    maxheap.push(100);
    maxheap.push(120);
    maxheap.push(140);
    maxheap.push(200);
    maxheap.push(20);

    minheap.push(12);
    minheap.push(22);
    minheap.push(2);
    minheap.push(4);
    minheap.push(112);
    minheap.push(119);

    //accessing elements 
    //02 -> top()
    //03-> pop()

    cout << "First element of the minheap-> " << minheap.top() << endl;
    minheap.pop();
    cout << "Second element of the minheap-> " << minheap.top() << endl;
    minheap.pop();
    cout << "Third element of the minheap-> " << minheap.top() << endl;
    minheap.pop();

    cout << "First element of the maxheap-> " << maxheap.top() << endl;
    maxheap.pop();
    cout << "Second element of the maxheap-> " << maxheap.top() << endl;
    maxheap.pop();
    cout << "Third element of the maxheap-> " << maxheap.top() << endl;
    maxheap.pop();
    maxheap.pop();
    maxheap.pop();
    maxheap.pop();

    //04 -> size()

    cout << "size of max heap-> " << maxheap.size() << endl;
    cout << "size of min heap-> " << minheap.size() << endl;

    //05 -> empty()

    if(maxheap.empty())
    {
        cout << "max heap is empty" << endl;
    }
    else{
        cout << "max heap is not empty" << endl;
    }


    if(minheap.empty())
    {
        cout << "min heap is empty" << endl;
    }
    else{
        cout << "min heap is not empty" << endl;
    }


    priority_queue<int> first;
    priority_queue<int> second;

    first.push(10);
    first.push(20);
    first.push(30);
    first.push(40);

    second.push(100);
    second.push(200);
    second.push(300);
    second.push(400);

    cout << "Top element of first queue before swapping-> " <<  first.top() << endl;
    cout << "Top element of second queue before swapping-> " <<  second.top() << endl;
    first.swap(second);
    cout << "Top element of first queue after swapping-> " <<  first.top() << endl; 
    cout << "Top element of second queue after swapping-> " <<  second.top() << endl;

    return 0;
}