#include<iostream>
using namespace std;

void counting(int n)
{
    if(n == 0)
    {
        return;
    }
    cout << n << endl;
    counting(n -1);
  
}

void reverse_counting(int n)
{
    if(n == 0)
    {
        return;
    }
    cout << n << endl;
    reverse_counting(n -1);
  
}
int main()
{
    int n;
    cout << "Enter the number to print counting:";
    cin >> n;

    cout << "Reverse counting" << endl; 
    reverse_counting(n);
    cout << "Counting" << endl;
    counting(n);
    return 0;
}