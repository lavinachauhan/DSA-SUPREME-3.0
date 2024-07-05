#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main()
{
    //unordered_map
    unordered_map<int,string> name;
    //ordered map
    map<int,string> month;

    //insertion 

    //01 -> square bracket method
    name[1]="Lavina";
    name[2]="Prakul";

    //02->make_pair function 
    name.insert(make_pair(3,"Rashmi"));
    name.insert(make_pair(7,"Ankur"));

    //03 ->creating pair
    pair<int,string> p;
    p.first=6;
    p.second="Lavina";

    //Member functions
    //01 ->insert()
    name.insert(p);


    //02 -> begin()
    //03 -> end()

    //iterator

    unordered_map<int,string>::iterator it=name.begin();

    while(it!=name.end())
    {
        pair<int,string> p=*it;
        cout << p.first << " " << p.second << endl;
        it++;
    }

    //04 -> size()
    cout << "Size of unordered_map name -> " << name.size() << endl;

    //05 ->empty()

    if(name.empty())
    {
        cout << "Unordered map is empty" << endl;
    }
    else{
        cout << "Unordered map is not empty" << endl;
    }

    //06 ->at()

    cout << "Element of map-> " << name.at(7) << endl;
    cout << "Element of map-> " << name.at(3) << endl;

    //07 -> operator[]

    cout << "Element of map-> " << name[1] << endl;
    cout << "Element of map-> " << name[7] << endl;

    //08 ->erase()
    cout << "Element t key 1 before erasing->" << name[1] << endl;
    name.erase(1);
    //this will print nothing
    cout << "Element t key 1 after erasing->" << name[1] << endl;

    //09 ->find()
    if(name.find(9)==name.end())
    {
        cout << "Element not found" << endl;
    }
    else{
        cout << "Element found" << "and element is " << name[3] << endl;
    }

    //10 ->count()

    if(name.count(9)==0)
    {
    cout << "Key not found " << endl;
    }
    else{
    cout << "Key found" << endl; 
    }

    //11->clear()
    name.clear();
    cout << "Size of unordered map -> " << name.size() << endl;


    

 








    return 0;
}