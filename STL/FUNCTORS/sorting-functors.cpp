#include<iostream>
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

class functor{

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

int main()
{
    student s1(90, "Lavina");
    student s2(89, "Lavi");

    functor cmp;
    if(cmp(s1, s2) == true)
    {
        cout << "Lavina marks is more than Lavi marks";
    }
    else{
        cout << "Lavi marks is more than Lavina marks";
    }


    return 0;
}