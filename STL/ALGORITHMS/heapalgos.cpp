#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<int> v={1,2,3,4,5,6,7};

    //01-> make heap() -->convert a range into maxheap

    make_heap(v.begin(),v.end());

    for(auto i:v)
    {
        cout << i << " ";
    }
    cout << endl;
    //02-> push_heap() -->insert element in maxheap

    v.push_back(9); //this will push element in vector but it not represent heap 

    cout << "After push_back() operation vector v not represent heap->" << endl;
    for(auto i:v)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "After using push heap operation it represents heap-> " << endl;

    push_heap(v.begin(),v.end());

    for(auto i:v)
    {
        cout << i << " ";
    }
    cout << endl;

    //03->pop_heap() -->removes largest element from maxheap

    pop_heap(v.begin(),v.end());
    v.pop_back();

    cout << "Vector after pop operation" << endl;

    for(auto i:v)
    {
        cout << i << " ";
    }
    cout << endl;

    //04->sort_heap() -->it sort the maxheap

    sort_heap(v.begin(),v.end());

    
    cout << "Vector after sort operation" << endl;

    for(auto i:v)
    {
        cout << i << " ";
    }
    cout << endl;






    return 0;
}