#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{

    vector<int> v={1,4,4,4,4,6,8,9};

    int target=7; 
    //01-> binary_search() -->returns the bool value if target element found or not

    bool ans = binary_search(v.begin(),v.end(),target);
    cout << "Found or not found-> " << ans << endl;

    //02-> lower_bound() -->returns an iterator of element which is greater or equal to target element
    auto it = lower_bound(v.begin(),v.end(),target);
    cout << *it << endl;

    //03-> upper_bound() -->returns an iterator of element which is greater to target element
    auto it1 = upper_bound(v.begin(),v.end(),target);
    cout << *it1 << endl;

    //04->equal_range() -->find range of elements which is equal to target element and it returns a pair
    
    
    auto pair= equal_range(v.begin(),v.end(),4);

    for(auto it=pair.first;it!=pair.second;it++)
    {
        cout << *it << " ";
    }

    return 0;
}