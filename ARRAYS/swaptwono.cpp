#include<iostream>
using namespace std;

int main()
{

    int a = 9;
    int b = 5;

    cout << "Temp variable method:" << endl;

    cout << "before a-> " << a << endl;
    cout << "before b-> " << b << endl;

    int temp = 0;
    temp = a;
    a = b;
    b = temp;

    cout << "after a-> " << a << endl;
    cout << "after b-> " << b << endl;

    cout << "addition subtraction method: " << endl;

    cout << "before a-> " << a << endl;
    cout << "before b-> " << b << endl;

    a = a+b;
    b = a-b;
    a = a-b;
    
    cout << "after a-> " << a << endl;
    cout << "after b-> " << b << endl;

    cout << "XOR method: " << endl;

    cout << "before a-> " << a << endl;
    cout << "before b-> " << b << endl;

    a = a^b;
    b = a^b;
    a = a^b;

    cout << "after a-> " << a << endl;
    cout << "after b-> " << b << endl;

    cout << "divide multipy method: " << endl;

    cout << "before a-> " << a << endl;
    cout << "before b-> " << b << endl;

    a = a*b;
    b = a/b;
    a = a/b;

    cout << "after a-> " << a << endl;
    cout << "after b-> " << b << endl;

    cout << "Swap function: " << endl;

    cout << "before a-> " << a << endl;
    cout << "before b-> " << b << endl;

    swap(a,b);

    cout << "after a-> " << a << endl;
    cout << "after b-> " << b << endl;

    return 0;
}
