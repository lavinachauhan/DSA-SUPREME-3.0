#ifndef BIRD_H
#define BIRD_H
#include<iostream>
using namespace std;
class bird{

    public:
    
    virtual void eat()=0;
    virtual void fly()=0;
};

class pigeon:public bird{

    public:

    void fly()
    {
        cout << "Pigeon is flying" << endl;
    }
    void eat()
    {
        cout << "Pigeon is eating" << endl;
    }

};

class peacock:public bird{

    public:

    void fly()
    {
        cout << "Peacock is flying" << endl;
    }
    void eat()
    {
        cout << "Peacock is eating" << endl;
    }

};

class eagle:public bird{

    public:

    void fly()
    {
        cout << "eagle is flying" << endl;
    }
    void eat()
    {
        cout << "eagle is eating" << endl;
    }

};
#endif