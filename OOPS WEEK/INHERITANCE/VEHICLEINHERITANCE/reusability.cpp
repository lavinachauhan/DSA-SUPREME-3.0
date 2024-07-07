#include<iostream>
using namespace std;


//parent class or base class
//all the data member and member functions are public
class vehicle{

public:
string name;
private:
string model;
protected:
int noOftyres;

public:

string getmodel()
{
    return this->model;
}

vehicle(string _name, string _model, int _noOftyres)
{
    cout << "Parametrised constructor called of vehicle class" << endl;
    this->name=_name;
    this->model=_model;
    this->noOftyres=_noOftyres;
}
void start_engine()
{
    cout << "Engine start of " << name << endl;
}

void stop_engine()
{
    cout << "Engine stop of " << name << endl;
}
~vehicle()
{
    cout << "Destructor called of vehicle class" << endl; 
}
};


//child class or derived class
//mode of inheritance -> Public
class car:public vehicle{

    public:

    int noOfDoors;
    int speed;

    public:

    car(string _name, string _model, int _noOftyres, int _noOfDoors, int _speed):vehicle(_name,_model,_noOftyres)
    {
        cout << "Parametrised constructor called of class car" << endl;
        this->noOfDoors=_noOfDoors;
        this->speed=_speed;
    }
    void start_AC()
    {
        cout << "AC start of " << name <<endl;
    }

    void tyrescount()
    {
        //noOftyres is protected in base class so it can be inherited by derived class
        //and accessed directly without using getter
        cout << "number of tyres " << noOftyres << endl;
    }

    void model()
    {
        //model is private in base class so it can not be inherited by derived class
        //but it can accessed using public method getter
        cout << "Model of " << name << " is-> " << getmodel() << endl;
    }

    ~car()
    {
        cout << "Destructor called of car class" << endl;
    }

};

int main()
{

    car A("Verna", "ABS", 4, 4, 200);

    A.start_engine(); 
    cout << "Speed of " << A.name << " is " << A.speed << endl; 
    A.start_AC();
    A.stop_engine();
    A.model();
    vehicle V("Verna","xyz",4);
    //V.model();
    //A.model; //private member can not be accesssed directly they can be accessed using public getter
    cout << "Accessing private member outside the class using getter-> " << A.getmodel() << endl;
    A.tyrescount();




    return 0;
}