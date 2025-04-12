#include<iostream>
using namespace std;

int factorial(int n)
{
    //base case
    if(n == 0 || n == 1)
    {
        return 1;
    }
    //recursive realtion
    int ans = n * factorial(n - 1); 
    //processing part
    return ans;
}

int main()
{

    int n;
    cout << "Enter the number to find its factorial: ";
    cin >> n;

    int ans = factorial(n);
    cout << "The factorial of " << n << " is: " << ans; 
    return 0;
}