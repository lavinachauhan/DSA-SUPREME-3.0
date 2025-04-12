#include<iostream>
using namespace std;

int main()
{

    //creation of pointer

    int* ptr;
    int a = 5;
    ptr = &a; //store address of variable a


    cout << "a ->" << a << endl;
    cout << "&a ->" << &a << endl;
    //cout << "*a" << *a << endl;  ->error
    cout << "ptr ->" << ptr << endl;
    cout << "*ptr ->" << *ptr << endl;
    cout << "&ptr ->" << &ptr << endl;
    cout << "ptr + 1 ->" << ptr + 1 << endl;
    cout << "*ptr + 1 ->" << *ptr + 1 << endl;
    cout << "*(ptr+1) ->" << *(ptr + 1) << endl; //garbage value
    *ptr = *ptr + 1; 

    //copy pointer
    int *q = ptr;
    cout << "copied pointer->" << *q << endl;
    cout << " q ->" << q << endl;


    //pointers with array

    int arr[5] = {1,2,3,4,5};

    int* ptr_arr = arr; //stores address of first block of array
    int (*ptt1_arr)[5] = &arr; //stores address of whole array

    cout << "arr ->" << arr << endl;   //address of first block
    cout << "&arr ->" << &arr << endl;  //address of first block
    cout << "*ptr_arr ->" << *ptr_arr << endl;
    cout << "*(ptr_arr + 1) ->" << *ptr_arr + 1 << endl;
    cout << "*(ptr_arr + 2) ->" << *ptr_arr + 2 << endl;
    cout << "*(ptr_arr + 3) ->" << *ptr_arr + 3 << endl;
    cout << "ptr_arr + 1 ->" << ptr_arr + 1 << endl;
    cout << "arr+1 ->" << arr + 1 << endl;
    cout << "arr[1] ->" << arr[1] << endl;
    cout << "&arr[0] ->" << &arr[0] << endl; 
    cout << "&arr[1] ->" << &arr[1] << endl; 


    //pointer to a character array

    char ch [7] = "Lavina";
    char* chr = ch;
    cout << "ch ->" << ch << endl; 
    cout << "chr -> "<< chr << endl; //pointer to a character array always print characters of array untill isfinds a null character
    cout << "*chr -> " << *chr << endl;
    cout << "&chr -> " << &chr << endl;
    cout << "*(chr + 1) -> " << *(chr + 1)<< endl;
    cout << "*(chr + 2) -> " << *(chr + 2) << endl;
    cout << "*(chr + 5)-> " << *(chr + 5) << endl;
    cout << "chr + 1 ->" << chr + 1 << endl;
    cout << "&ch ->" << &ch << endl;
    cout << "&(ch + 1) ->" << &ch + 1 << endl;
    cout << "&ch + 1 ->" << &ch + 1 << endl;

    // char *charr = "Lavina"; // bad practice because if we create and initialize it in this way is becone a string constant or string literal
    // charr[3] = 'd';
    // cout << charr[3] << endl;

    // const char *c ="Lavina";
    // c[2] = 'm';  // gives error beacues we can not change read only memory
    // cout << c[2];

    return 0;
}