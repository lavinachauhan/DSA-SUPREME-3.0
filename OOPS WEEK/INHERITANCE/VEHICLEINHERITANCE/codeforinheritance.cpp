#include<iostream>
using namespace std;


//parent class or base class

class vehicle{

public:
string name;
private:
string model;
protected:
int noOftyres;

public:

vehicle()
{
    cout << "Default constructor called of vehicle class" << endl;
}

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

    car()
    {
        cout << "Default constructor called of car class" << endl;
    }

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

class motorcycle:public vehicle{

    protected:
    string colour;
    string handlebartype;

    public:

    motorcycle()
    {
        cout << "Motorcycle constructor called" << endl;
    }

    motorcycle(string _name, string _model, int _noOftyres,string  _colour,string  _handlebartype):vehicle(_name,_model,_noOftyres)
    {
        cout << "Parametrised constructor called of motorcycle" << endl;
        this->colour=_colour;
        this->handlebartype=_handlebartype;

    }
    void wheel()
    {
        cout << "Wheels of motorcycle" << endl;
    }

    ~motorcycle()
    {
        cout << "Motorcycle destructor called" << endl;
    }


};

int main()
{

    
    //IMPORTANT COMMENT 

    //When the mode of inheritance is public then
    //all the public member will visible as public and 
    //protected members will visible as protected 
    //and private member visible as private to derived class 
    //we can access public members outside the class or in the main function 
    
    //When the mode of inheritance is protected then
    // all the public,and protected members will visible as protected to derived class and it behave as protected in derived class
    //we can not access them outside the class or in the main function 

    //similarly if mode of inheritance is private then  
    //all the public,and protected members will visible as private to derived class and it behave as private in derived class 
    //and it can not accessible outside the class or in the main function

    car A("Verna", "ABS", 4, 4, 200);

    A.start_engine(); 
    cout << "Speed of " << A.name << " is " << A.speed << endl; 
    A.start_AC();
    A.stop_engine();
    A.model();
    //vehicle V("Verna","xyz",4);
    //V.model();
    //A.model; //private member can not be accesssed directly they can be accessed using public getter
   // cout << "Accessing private member outside the class using getter-> " << A.getmodel() << endl;
   // A.tyrescount();

    motorcycle M("BMW", "ABS", 2, "black", "200");
    M.start_engine(); 
    cout << "Name of motorcycle " << M.name << endl; 
    M.stop_engine();
    M.wheel();

    return 0;
}