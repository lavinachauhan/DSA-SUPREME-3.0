#include<iostream>
#include<vector>
#include<algorithm>
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
        if(a.marks > b.marks)
        {
            return true;
        }
        else{
            return false;
        }
    }

};

class comparatorr{

    public:
    bool operator()(int a, int b)
    {
        if(a > b)
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
    //sorting students in descending order according to their marks
    student s1(90,"lavi");
    student s2(91,"avi");
    student s3(97,"kavi");
    student s4(89,"savi");
    student s5(78,"ravi");

    vector<student> s = {s1,s2,s3,s4,s5};
    comparator cmp; 
    sort(s.begin(), s.end(), cmp); 
    for(student i:s)
    {
        cout << i.marks << " ";
    }
    cout << endl;
    comparatorr comp;
    vector<int> v ={20,68,23,45};
    sort(v.begin(),v.end(),comp);
    for(auto i:v)
    {
        cout << i << " ";
    }

    return 0;
}