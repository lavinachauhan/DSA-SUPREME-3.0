#include<iostream>
#include<climits>
using namespace std;

bool find(int arr[], int size, int target)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == target)
        {
            return true;
        }
    }
    return false;
}

void findmin(int arr[], int size)
{
    int mini = INT_MAX;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] < mini)
        {
            mini = arr[i];
        }
    }
    cout << "Minimum element is-> " << mini << endl;
}

void findmax(int arr[], int size)
{
    int maxi = INT_MIN;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }
    cout << "Maximum element is-> " << maxi << endl;

}

void extreme_printing(int arr[], int size)
{
    int i = 0;
    int j = size-1;
    if(size % 2 == 0)
    {
    while(i <= j)
    {
        cout << arr[i++] << " " << arr[j--] << " ";
    }
    }
    else{
        while(i < j)
        {
            cout << arr[i++] << " " << arr[j--] << " ";
        }
        cout << arr[i];
    }
}

void reverse(int arr[], int size)
{
    int i = 0;
    int j = size-1;
    while(i < j)
    {
        swap(arr[i++], arr[j--]);
    }
}


int main()
{
    //creation of array
    int arr[5] = {1,2,3,4,5};
    int brr[4];
    int crr[] = {1,2,3,4,5};

    //size of array
    cout << "size of arr-> " << sizeof(arr) << endl; 
    cout << "size of 0th index of array-> " << sizeof(arr[0]) << endl;
    cout << "Number of elements in crr-> " << sizeof(arr)/sizeof(arr[0]) << endl;

    //accessing of elements
    cout << "Elements at 0th index-> " << arr[0] << endl;
    cout << "Elements at 4th index-> " << arr[4] << endl;

    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int a[5] = {1,2};
    cout << "a[0]-> " << a[0] << endl;
    cout << "a[1]-> " << a[1] << endl;
    cout << "a[2]-> " << a[2] << endl;
    cout << "a[3]-> " << a[3] << endl;
    cout << "a[4]-> " << a[4] << endl;

    cout << "2[arr] or arr[2] both are same " << 2[arr] << " " << arr[2] << endl;

    //cout << arr[199] << endl; //this will show segmentation fault or may be show some garbage value

    //fill function
    int b[9];
    fill(b, b+9, 8);
    for(int i = 0; i < 9; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;

    //cout << b[7];

    double drr[5] = {1.22, 45.666, 43, 2, 4};
    cout <<" size- > " << sizeof(drr)/sizeof(drr[0]) << endl;

    //linear search in 1-D array
    int size = 5;
    int target = 5;
    cout << "Element found or not-> " << find(arr, size, target) << endl;

    findmin(arr, size);
    findmax(arr, size);
    extreme_printing(arr, size);
    reverse(arr, size);
    cout << endl << "Array after reverse-> " << endl;
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }














    return 0;
}