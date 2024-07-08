#include<iostream>
using namespace std;

class complex{

    public:

    int real;
    int img;

    complex()
    {
        real=img=-1;
    }
    complex(int r,int i)
    {
        this->real=r;
        this->img=i;
    }

    complex operator + (complex &B)
    {
        complex temp;
        temp.real = this->real + B.real;
        temp.img = this->img + B.img;
        return temp;
    }

    void print()
    {
        cout << this->real << "+i" << this->img << endl;
    }

    void printsub()
    {
        cout << this->real << "-i" << this->img << endl;
    }

    complex operator - (complex &B)
    {
        complex temp;
        temp.real = this->real - B.real;
        temp.img = this->img - B.img;
        return temp;
    }

    complex operator * (complex &B)
    {
        complex temp;
        temp.real = this->real * B.real;
        temp.img = this->img * B.img;
        return temp;
    }

    void printproduct()
    {
        cout << this->real << "*i" << this->img << endl;
    }

    
    bool operator == (complex &B)
    {
        bool temp;
        temp =((this->real == B.real) && (this->img == B.img));
        return temp;
    }

};

int main()
{
    complex A(3,11);
    cout << "Complex number A -> ";
    A.print();

    complex B(3,10);
    cout << "Complex number B -> ";
    B.print();

    complex C=A+B;
    cout << "Complex number C -> ";
    C.print();

    complex D=A-B;
    cout << "Complex number D -> ";
    D.printsub();

    complex E=A*B;
    cout << "Complex number E -> ";
    E.printproduct();

    bool F=A==B;

    cout << "A==B -> " << F << endl;



    return 0;
}