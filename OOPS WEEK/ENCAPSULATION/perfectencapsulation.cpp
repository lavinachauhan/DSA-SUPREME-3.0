#include<iostream>
using namespace std;

class student{

    private:

    int age;
    int *marks;
    string name;
    char section;
    
    public:

    student()
    {
        cout << "Default constructor" << endl;
    }

    void setmarks(int a)
    {
        *this->marks=a;
    }

    int getmarks() const
    {
        return *this->marks;
    }

    int getage()
    {
        return this->age;
    }

    student (int age,string name,char section ,int marks)
    {
        cout << "Parametrised constructor called" << endl;
        this->name=name;
        this->age=age;
        this->section=section;
        this->marks=new int(marks);
    }

    ~student()
    {
        cout << "Destructor called" << endl;
        delete marks;
    }
};

int main()
{
    student s1(24,"Avani",'A',98);

    cout << "marks of student -> "<< s1.getmarks() << endl; //getter
    s1.setmarks(90);
    cout << "marks of student after setter -> "<<  s1.getmarks() << endl; 
    cout << "age of student "<< s1.getage() << endl;
    return 0;
}