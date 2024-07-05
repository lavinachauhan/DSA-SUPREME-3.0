#include<iostream>
#include<string>
using namespace std;

//creation of class


class student{

    public:
    //attributes of class student
    int rollno;
    int age;
    string name;
    char grade;
    int nos;   //number of subjects

    //methods or behaviour or functions of class student

    student()
    {
        cout << "Construstor called" << endl;
    }

    void study()
    {
        cout << this->name <<  " studying" << endl;
    }

    void sleep()
    {
        cout << this->name << " sleeping " << endl;
    }

    void bunking()
    {
        cout << this->name << " bunking" << endl;
    }
    ~student()
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    student A;
    A.rollno=1;
    A.age=23;
    A.name="Lavi";
    A.grade='B';
    A.nos=5;

    A.study();
    A.sleep();
    A.bunking();
    cout << "Rollno of student A "<< A.rollno << endl;

    student B;
    cout << "Enter the age of student B" << endl;
    cin >> B.age ;
    B.name="Shiva";
    B.study();
    cout << "Age of student B "<< B.age << endl;
    cout << "Name of student B " << B.name << endl;











    return 0;
}