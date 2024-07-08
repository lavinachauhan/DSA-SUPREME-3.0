#include<iostream>
using namespace std;

//parent class
class shape{    //final{ //if we make base class as final class then no other class will inherit from it
    public:

    virtual void draw() //final //if we make virtual function as final then it can not be overriden by derived class functions
    {
        cout << "Shape drawing" << endl;
    }
};

class circle: public shape{

    public:
    void draw()
    {
        cout << "Circle drawing" << endl;
    }
};

class triangle: public shape{

    public:
    void draw()
    {
        cout << "Triangle drawing" << endl;
    }
};

class square: public shape{

    public:
    void draw()
    {
        cout << "Square drawing" << endl;
    }
};

void shapedrawing(shape *s)
{
    s->draw();
}

int main()
{

    triangle t;
    circle c;
   shapedrawing(&c); //In these cases earlybinding is done to achieve late binding or runtime polymorphism we use virtual keyword
    shapedrawing(&t); //after using virtual keyword latebinding can be achieved
    square *sq=new square();
    shapedrawing(sq);
    
    //upcasting 
    shape *st= new circle();
    st->draw();

    //downcasting
    shape *s1=new shape();
    circle *c1= (circle *)s1;
    c1->draw();

   // c.draw(); // this will throw error if we make base class virtual function as final 
    return 0;
}