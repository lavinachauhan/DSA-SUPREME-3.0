#include<iostream>
using namespace std;

class employee{

protected:
string name;
int empId;

public:

employee()
{
    cout << "Default constructor of employee" << endl;
}

employee(int eID,string ename)
{
    this->empId=eID;
    this->name=ename;
}

void display()
{
    cout << "Name of employee " << name << " and employee ID " << empId << endl;
}

~employee()
{
    cout << "Desrtructor of employee" << endl;
}

};

class HRmanager:public employee{

    public:

    HRmanager(int eID, string ename):employee(eID,ename)
    {
        cout << "Employee is " << ename << endl;

        HRduties();
    }
    void HRduties()
    {
        cout << "HR manager handle human resource duties" << endl;
    }
};

class HRdirector:public HRmanager{

    public:
    HRdirector(int eID,string ename):HRmanager(eID,ename)
    {
        HRdepartment();
    }
    void HRdepartment()
    {
        cout << "HR department managed by HR director" << endl;
    }
};

int main()
{
    HRdirector HR(101,"Lavina");
    return 0;
}