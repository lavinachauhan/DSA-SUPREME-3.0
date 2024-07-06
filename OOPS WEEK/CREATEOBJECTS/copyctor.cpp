#include<iostream>
using namespace std;

class student{

    public:
    //attributes
    int rollno;
    string name;
    int age;
    char grade;
    int marks;

    //default constructor
    student()
    {
        cout << "Default constructor called" << endl;
    }

    //parametrised constructor
    student (int rollno,string name,int age,char grade ,int marks)
    {
        cout << "Parametrised constructor called" << endl;
        this->rollno=rollno;
        this->name=name;
        this->age=age;
        this->grade=grade;
        this->marks=marks;
    }

    //copy constructor
    student(const student &srcobject)
    {
        cout << "Copy constructor called" << endl;
        this->rollno=srcobject.rollno;
        this->name=srcobject.name;
        this->age=srcobject.age;
        this->grade=srcobject.grade;
        this->marks=srcobject.marks;

    }

};

int main()
{
    student B;
    B.age=29;
    cout << "Age of B -> " << B.age << endl;
    student A(1,"lavi",22,'A',89);
    student C(A);

    cout << "Rollno of both students-> " << A.rollno << " " << C.rollno << endl;

    return 0;
}