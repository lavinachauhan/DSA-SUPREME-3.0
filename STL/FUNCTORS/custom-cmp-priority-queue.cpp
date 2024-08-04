#include<iostream>
#include<queue>
using namespace std;

class student{

    public:
    int marks;
    string name;
    student(int marks, string name)
    {
        this->marks = marks;
        this->name = name;
    }
};

class comparator{
    public:
    bool operator()(student a, student b)
    {
        //high priority ->max marks
        if(a.marks > b.marks)
        {
            return true;
        }
        else{
            return false;
        }
    }
};


int main()
{
    //max heap
   // priority_queue<int,vector<int>> pq;
    //priority_queue<int,vector<int>,less<int>> pq1;

    //min heap
    //priority_queue<int,vector<int>,greater<int>> pq2;
    priority_queue<student, vector<student>,comparator> pq;

    pq.push(student(90,"lavi"));
    pq.push(student(91,"avi"));
    pq.push(student(95,"ravi"));
    pq.push(student(92,"kavi"));
    pq.push(student(88,"savi"));


    cout << pq.top().marks << " " << pq.top().name << endl;
    pq.pop();
    cout << pq.top().marks << " " << pq.top().name << endl;
    pq.pop();
    cout << pq.top().marks << " " << pq.top().name << endl;
    pq.pop();
    cout << pq.top().marks << " " << pq.top().name << endl;
    pq.pop();
    cout << pq.top().marks << " " << pq.top().name << endl;
    pq.pop();


















    return 0;
}