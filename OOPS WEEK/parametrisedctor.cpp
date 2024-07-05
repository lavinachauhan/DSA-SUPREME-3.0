#include<iostream>
#include<string>
using namespace std;

class car{

    public:
    //attributes
    int numberofseats;
    string model;
    string colour;

    //default constructor
    car()
    {
        cout << " Default constructor called" << endl; 
    }

    //parametrised constructor
    car(int numberofseats, string model, string colour)
    {
        cout << "Parametrised constructor called" << endl;
        this->numberofseats=numberofseats;
        this->model=model;
        this->colour=colour;
    }

    void function()
    {
        cout << this->model << " this car is very fast" << endl;
    }

    ~car()
    {
        cout << "destructor called" << endl;
    }
};

int main()
{

    car C;

    C.model="xyz";
    C.numberofseats=4;
    C.colour="white";

    C.function();
    car A(8,"swift","grey");
    A.function();




    return 0;
}