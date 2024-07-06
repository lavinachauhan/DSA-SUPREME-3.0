#include<iostream>
#include<string>
using namespace std;

class student{

    public:
    //attributes of class student
    int rollno;
    int age;
    string name;
    char grade;
    int nos;   //number of subjects
    int *gpa;

    student()
    {
        cout << "Construstor called" << endl;
    }

    student(int rollno,int age,string name,char grade,int nos,float gpa)
    {
        cout << "Parametrised constructor called" << endl;
        this->rollno=rollno;
        this->name=name;
        this->age=age;
        this->grade=grade;
        this->nos=nos;
        this->gpa=new int(gpa);
    }
    void study()
    {
        cout << this->name <<  " studying" << endl;
    }

    ~student()
    {
        cout << "Destrustor called" << endl;
        delete gpa;
    }

};

int main()
{

    //dynamic allocation or student pointer
    student *A = new student(2,23,"avni",'B',5,9.5);


    cout << "Name of student -> " << A->name << endl;
    cout << "Age of student-> " << A->age << endl;


    delete A;

    return 0;
}