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

employee(string _name,int _empId)
{
    cout << "Parametrised constructor of employee" << endl;
    this->name=_name;
    this->empId=_empId;
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

class developer:public employee
{
    protected:

    string programminglang;
    int projectnumber;

    public:

    developer()
    {
        cout << "Default constructor of developer" << endl;
    }

    developer(string _name,int _empId,string _programminglang,int _projectnumber)
    {
        cout << "Parametrised constructor of developer" << endl;
        this->name=_name;
        this->empId=_empId;
        this->programminglang=_programminglang;
        this->projectnumber=_projectnumber;
    };

    void dev()
    {
        cout << "This developer is good developer" << endl;
    }

    ~developer()
    {
        cout << "Destructor of developer" << endl;
    }
};

class executive:public employee{

    public:
    executive(int eID,string ename):employee(ename,eID)
    {
        cout << "Parametrised constructor of executive " << endl;
    }

    void makeExeDecision()
    {
        cout << "Makes executive decision" << endl;
    }

    ~executive()
    {
        cout << "Executive destructor" << endl;
    }
};

class CEO:public executive{

    public:
    CEO(int eID,string ename):executive(eID,ename)
    {
        cout << "CEO parametrised constructor called" << endl;
    }
    
    void leadCompany() 
    {
        makeExeDecision();
        cout << "CEO leading the company." << std::endl;
    }
    ~CEO()
    {
        cout << "CEO destructor" << endl;
    }

};



int main()
{
    //this code is the example of hierarchical as well as hybrid inheritance
    //employee, developer, executive form hierarchical inheritance 
    //employee, executive, CEO make multilevel inheritance so, hierarchical and multilevel together form a hybrid inheritance
    developer D("Lavina", 101, "c++", 90);
    D.display();
    D.dev();

    CEO ceo(20,"Lavina");
    ceo.leadCompany();

    return 0;
}