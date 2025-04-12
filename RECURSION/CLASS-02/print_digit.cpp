#include<iostream>
using namespace std;

void print_digit(int num)
{
    if(num == 0)
    {
        return;
    }
    int digit = num % 10;
    num = num / 10;
    print_digit(num);
    cout << digit << " ";
}
int main()
{
    int num;
    cout << "Enter the number to print its digit individually: " << endl;
    cin >> num;
    print_digit(num);
    return 0;
}