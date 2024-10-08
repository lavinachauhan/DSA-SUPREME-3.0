#include<iostream>
using namespace std;

bool findtarget(int a[][3], int row, int col, int target)
{
    for(int i = 0; i < row; i++)
    {
        for( int j = 0; j < col; j++)
        {
            if(target == a[i][j])
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{   //creation
    int arr[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};

    //accessing values
    cout << arr[0][0] << endl;
    cout << arr[1][2] << endl;

    //row-wise traversing
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    //col-wise traversing
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

    int brr[5][3];

    //row wise taking input
    // for(int i = 0; i < 5; i++)
    // {
    //     for(int j = 0; j < 3; j++)
    //     {
    //         cin >> brr[i][j];
    //     }
    // }

    //row wise printing
    // for(int i = 0; i < 5; i++)
    // {
    //     for(int j = 0; j < 3; j++)
    //     {
    //         cout << brr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    //column wise input
    // for(int i = 0; i < 3; i++)
    // {
    //     for(int j = 0; j < 5; j++)
    //     {
    //         cin >> brr[j][i];
    //     }
    // }
    //column wise printing
    // for(int i = 0; i < 3; i++)
    // {
    //     for(int j = 0; j < 5; j++)
    //     {
    //         cout << brr[j][i] << " ";
    //     }
    //     cout << endl;
    // }

    int a[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    //diagnol wise printing
    for(int i = 0; i < 3; i++)
    {
        for(int j = i ; j < i+1; j++)
        {
            cout << a[i][j] << endl;
        }
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 3-i-1; j < 3 - i; j++)
        {
            cout << a[i][j] << endl; 
        }
    }

    //row wise sum 
    int sum = 0;
    cout << "Row wise sum printing-> " << endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            sum += a[i][j];
        }
        cout << sum << " ";
        sum = 0;
    }

    //column wise sum
    cout << endl << "Column wise sum printing-> " << endl;
    sum = 0;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            sum += a[j][i];
        }
        cout << sum << " ";
        sum = 0;
    }

    cout << endl << "Diagonal wise printing-> " << endl;
    sum = 0;
    for(int i = 0; i < 3; i++)
    {
        for(int j = i; j < i + 1; j++)
        {
            sum += a[i][j];
        }
    }
    cout << sum;
    sum = 0;
    cout << endl << "Diagonal wise sum-> " << endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 3-i-1; j < 3-i; j++)
        {
            sum += a[i][j];
        }
    }
    cout << sum << endl;

    //transpose of a matrix
    //10 20 30          //10 40 70
    //40 50 60          //20 50 80
    //70 80 90          //30 60 90

    cout << "Matrix printing before transpose-> " << endl;
    for(int i = 0; i < 3; i++)
    {
         for(int j = 0; j < 3; j++)
         {
             cout << a[i][j] << " ";
         }
         cout << endl;
     }

    for(int i = 0; i < 3; i++)
    {
        for(int j = i; j < 3; j++)
        {
            swap(a[i][j], a[j][i]);
        }
    }

    cout << endl << "Matrix printing after transpose -> " << endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }
         cout << endl;
    }


    //linear search in 2-D array
    int row = 3;
    int col = 3;
    int target = 10;
    cout << "Element found or not in 2-D array -> " << findtarget(a, row, col, target);
    return 0;
}