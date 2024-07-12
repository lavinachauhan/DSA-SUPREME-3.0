#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void print3times(int &a)
{
    cout << a*3 << " " ;
}

bool iseven(int &a)
{
    return a%2==0;
}

int main()
{
    //01-> for-each()

    vector<int> v={8,4,3,6,5,2};

    for_each(v.begin(),v.end(),print3times);

    //02-> find()-->return an iterator 
    int target=10;
   auto it=find(v.begin(),v.end(),target);
   cout << endl << *it << endl;
   
   //03-> find_if -->return an iterator 

   auto ans=find_if(v.begin(),v.end(),iseven);
   cout << *ans << endl;

   //04-> std::count() -->return count 
    int num=2;
   auto i=count(v.begin(),v.end(),num);
   cout << i << endl;

    //05-> sort() --> sort the vector 
    //By default sort in ascending order

    cout << "Vector before sort -> " << endl;

    for(auto i:v)
    {
        cout << i << " ";
    }
    sort(v.begin(),v.end());

    cout << endl << "Vector after sort -> " << endl;

    for(auto i:v)
    {
        cout << i << " ";
    }


    //06-> reverse() -->reverse the vector

    vector<char> c={'a','c','f','i','e'} ;

    cout << endl << "Vector before reverse-> " << endl;

    for(auto i:c)
    {
        cout << i << " ";
    }

    reverse(c.begin(),c.end());

    cout << endl << "Vector after reverse->" << endl;

    for(auto i:c)
    {
        cout << i << " ";
    }

    //07-> rotate() -->rotate vector for specific number of place

    cout << endl <<"Vector before rotate-> " << endl;

    for(auto i:v)
    {
        cout << i << " ";
    }

    rotate(v.begin(),v.begin()+3 ,v.end());

    cout << endl <<"Vector after rotate-> " << endl;

    for(auto i:v)
    {
        cout << i << " ";
    }

    //08->unique() -->returns an iterator and that iterator represents 
    //one side with unique elements and other sider with duplicate elemets

    vector<int> arr={1,1,2,3,4,5,5,6,7,7,8};

    auto iti=unique(arr.begin(),arr.end());

    arr.erase(iti , arr.end());
    cout << endl;
    for(auto i:arr)
    {
        cout << i << " ";
    }

    //09 ->partition() -->make partition on the basis of certain conditions

    vector<int> brr={1,2,3,4,5,6,7};

    auto iter=partition(brr.begin(),brr.end(),iseven);
    cout << endl;
    
    for(auto a:brr)
    {
        cout << a << " ";
    }
    




    return 0;
}