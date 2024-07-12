#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>
using namespace std;

int main()
{
    vector<int> v={10,20,30,40,50,60};
    //01-> accumulate() -->computes the sum in a specific range

    int sum=10;
    int ans=accumulate(v.begin(),v.end(),sum);

    cout << "Sum of elements is ->" << ans << endl;

    //02-> inner-product() -->compute inner product of specific range
    //e.g-> [1,2,3] 
    //      [7,4,2]
    // it return -> 1*7 + 2*4 + 3*2 = 7 + 8 + 6 => 21

    vector<int> arr1={1,2,3};
    vector<int> arr2={10,20,30};
    
    int ans1 = inner_product(arr1.begin(),arr1.end(),arr2.begin(),0);

    cout << "Inner product of arr1 and arr2-> " << ans1 << endl;

    //03 ->partial_sum() -->it return sum at every element
    vector<int> result(arr1.size());
    partial_sum(arr1.begin(),arr1.end(),result.begin());

    for(auto i:result)
    {
        cout << i << " ";
    }

    cout << endl;

    //04-> iota() -->fill incrementing value in specific range

    vector<int> values(10);
    iota(values.begin(),values.end(),1);

    cout << "Printing of values of vector-> values" << endl;

    for(auto i:values)
    {
        cout << i << " ";
    }







    return 0;
}