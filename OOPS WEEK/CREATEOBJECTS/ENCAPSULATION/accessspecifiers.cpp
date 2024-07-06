#include<iostream>
using namespace std;

class student{

    public:
    int id;
    string name;
    int nos;

    private:
    
    int marks;
    string subject;

    public:

    student()
    {
        cout << "Default constructor called" << endl;
    }

    void result()
    {
        cout << this->name << " student is pass" << endl;
    }

    student(int id, string name, int nos, int marks, string subject)
    {
        cout << "Paramertrised constructor called" << endl;
        this->id=id;
        this->name=name;
        this->marks=marks;
        this->nos=nos;
        this->subject=subject;

        cout << "Marks in subject " << subject << "->" << marks << endl; //it can only accessed within the class not outside the class 
        //check line number 63 and 64
    }

    ~student()
    {
        cout << "Destructor called" << endl;
    }
    private:

    void compartment()
    {
        cout << "compartment in "  << this->subject << " subject" << endl; 
    }


};

int main()
{

    student s2;
    s2.name="Avni";

    cout <<" Name of student s2-> " << s2.name << endl;

  //  s2.marks; -> throw error // can not be accessible because it is private data member 
   // s2.compartment();

    student s1(7,"lavina",5,98,"DSA");
    s1.result();


    

    return 0;
}