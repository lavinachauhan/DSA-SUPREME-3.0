#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<int> v1={2,3,4,5,6};
    vector<int> v2={2,3,4,7,8,9};
    vector<int> result;

    //01->set_union() -->make union of two sorted range

    set_union(v1.begin(),v1.end(),v2.begin(),v2.end(),inserter(result,result.begin()));

    for(auto i:result)
    {
        cout << i << " ";
    }

    vector<int> result1;

    //02->set_insertion() -->make insertion of two sorted range
    cout << endl;
    set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),inserter(result1,result1.begin()));

    for(auto i:result1)
    {
        cout << i << " ";
    }

        vector<int> result2;
    //03->set_difference() -->computes difference of two sorted range

    cout << endl;
    set_difference(v1.begin(),v1.end(),v2.begin(),v2.end(),inserter(result2,result2.begin()));

    for(auto i:result2)
    {
        cout << i << " ";
    }

    //04->set_symmetric_difference() -->computes symmetric_difference of two sorted range

    cout << endl;
    vector<int> result3;
    
    set_symmetric_difference(v1.begin(),v1.end(),v2.begin(),v2.end(),inserter(result3,result3.begin()));

    for(auto i:result3)
    {
        cout << i << " ";
    }









    return 0;
}