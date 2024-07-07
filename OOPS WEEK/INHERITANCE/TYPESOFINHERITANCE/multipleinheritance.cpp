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
class projectmanager{

private:
string projectmanaged;
protected:
int projectID;

public:

projectmanager()
{
    cout << "Default constructor of projectmanager" << endl;
}

projectmanager(string name, int ID)
{
    this->projectmanaged=name;
    this->projectID=ID;
}

void projectmanage()
{
    cout << "Project ID " << projectID << " of " << projectmanaged << endl;
}

~projectmanager()
{
    cout << "Destructor of projectmanager" << endl;
}

};

class teamlead{

    protected:
    int teamsize;

    public:

    teamlead()
    {
        cout << "Default constructor of teamlead" << endl;
    }
    teamlead(int size)
    {
        this->teamsize=size;
    }

};


class techlead:public teamlead,public projectmanager,public employee{

    public:

    techlead(int eID,string ename,string name, int ID,int size):employee(eID,ename),projectmanager(name,ID),teamlead(size)
    {
        cout << "constructor of techlead" << endl;
        display();
        cout << "Team members -> " << size << endl;
    }

};
int main()
{
    techlead team(101,"Lavina","library system",1190,5);
    team.projectmanage();



}