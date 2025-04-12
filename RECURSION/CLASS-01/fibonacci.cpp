#include<iostream>
using namespace std;

int fibonacci(int n)
{
    if(n == 1 || n == 0)
    {
        return n;
    }
    int ans = fibonacci(n - 1) + fibonacci(n - 2);
    return ans;
}

int main()
{
    int n;
    cout << "Enter the value of n to find nth_term: ";
    cin >> n;
    cout << n << "th term of fibonacci series: " << fibonacci(n);
    return 0;
}