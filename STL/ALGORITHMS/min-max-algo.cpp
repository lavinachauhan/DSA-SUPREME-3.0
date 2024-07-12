#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<int> v={3,4,5,8,10};

    int a=19;
    int b=23;

    //01->min() -->compare and return minimum element

    cout << "Minimum element is-> " << min(a,b) << endl;

    //02->max() -->compare and return maximum element

    cout << "Maximum element is-> " << max(a,b) << endl;

    //03-> max_element() -->returns iterator of maximum element in a specific range

    cout << "Maximum element in vector v-> " << *max_element(v.begin(),v.end()) << endl;

    //04-> min_element() -->returns iterator of minimum element in a specific range

    cout << "Minimum element in vector v-> " << *min_element(v.begin(),v.end()) << endl;


    return 0;
}