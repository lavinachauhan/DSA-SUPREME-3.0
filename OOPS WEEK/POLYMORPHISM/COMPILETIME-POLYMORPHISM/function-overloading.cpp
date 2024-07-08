#include<iostream>
using namespace std;

class addition{


    public:

    int sum(int a,int b)
    {
        return a+b;
    }

    int sum(int a,int b,int c)
    {
        return a+b+c;
    }

    double sum(double a,double b,double c)
    {
        return a+b+c;
    }


};


int main()
{

    addition A;

    cout << A.sum(1.1, 1.1, 1.1) << endl;

    return 0;
}