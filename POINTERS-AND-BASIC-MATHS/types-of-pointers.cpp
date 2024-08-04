#include<iostream>
using namespace std;

int main()
{
    //01: wild pointer 
    //when we try to access uninitialized or deleted pointers then is said to be wild pointer
    // int a = 10;
    // int *p;
    // cout << *p; ->it is a wild pointer(accessing of a uninitialized pointer)
    //p = &a;
    // delete p;
    // cout << p; -> here it becomes wild pointer(accessing of pointer after deletion)
    //int * ptr = &x; -> also a wild pointer (pointer pointing to non existing variable)

    //02: dangling pointer
    //pointer points to a memory locations that has been freed or deallocated
    int u = 10;
    int *s = &u;
    delete s;
    //cout << s; -> here pointer becomes a dangling pointer and is show undefined behaviour

    //03: void pointer
    //void pointer is a pointer that can point to any datatype

    int p = 10;
    void *ptr = &p;
    //we must type cast void pointer before dereferencing it 
    //using static_cast we can cast void pointer to a specific datatype

    int * intptr = static_cast<int*>(ptr);
    cout << *intptr << endl;

    //dynamic memory location
    int* v = new int;
    void* i = v;
    int *pointer = static_cast<int*>(i);
    *pointer = 10;
    cout << *pointer;
    return 0;
}