#include<iostream>
using namespace std;

int power(int n)
{
    if(n == 0)
    {
        return 1;
    }
    int ans = 2 * power(n-1);
    return ans;
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Power of 2 is: " << power(n);
    return 0;
}