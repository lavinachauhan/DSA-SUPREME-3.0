#include<iostream>
using namespace std;

void array(int arr[], int size)
{
    for(int i = 0; i < 3; i++)
    {
        arr[i] += 10;
    }
}

int main()
{
    int arr[3] = {10, 20, 30};
    cout << arr[0] << " " << arr[1] << " "  << arr[2] << endl;

    //array pass by reference in function
    array(arr, 3);

    //beacuse original array values change after function implementation
    cout << arr[0] << " " << arr[1] << " "  << arr[2] << endl;
    

    //double or multilevel pointers

    int a = 10;
    int *p = &a;
    int **q = &p;
    int ***r = &q;

    cout << "a ->" << a << endl;
    cout << "&a ->" << &a << endl;
   // cout << "*a ->" << *a << endl;
    cout << "p ->" << p << endl;
    cout << "&p ->" << &p << endl;
    cout << "*p->" << *p << endl;

    cout << "q ->" << q << endl;
    cout << "&q ->" << &q << endl;
    cout << "*q->" << *q << endl;
    cout << "**q->" << **q << endl;

    cout << "r ->" << r << endl;
    cout << "&r ->" << &r << endl;
    cout << "*r->" << *r << endl;
    cout << "**r->" << **r << endl;
    cout << "***r->" << ***r << endl;

    int* pt = new int;
    *pt = 5;
    cout << *pt;
    delete pt;

    //creation of 1-D array (dynamically)
    int *ptr = new int[5];

    for(int i = 0; i < 5; i++)
    {
        cin >> ptr[i];
    }

    for(int i = 0; i < 5; i++)
    {
        cout << ptr[i] << " ";
    }
    delete []ptr;

    //creation of 2-D array (dynamically)
    int **ptr1 = new int*[5];
    for(int i = 0; i < 5; i++)
    {
        ptr1[i] = new int[4];
    }

    //insertion of values in 2-D array
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cin >> ptr1[i][j];
        }
    }

    //printing of values in 2-D array
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cout << ptr1[i][j] << " ";
        }
    }
    for(int i = 0; i < 5; i++)
    {
        delete []ptr1[i];
    }
    return 0;
}

