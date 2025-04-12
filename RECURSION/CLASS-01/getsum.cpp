#include<iostream>
using namespace std;

int get_sum(int n)
{
    if(n == 1){
        return 1;
    }
    int sum = get_sum(n - 1) + n;
    return sum;
}

int main()
{
    int n;
    cout << "Enter the number to get sum from 1 to n: ";
    cin >> n;
    cout << "Sum of 1 to n numbers: " << get_sum(n);
    return 0;
}