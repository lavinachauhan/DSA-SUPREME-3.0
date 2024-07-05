#include<iostream>
#include<set>
//#include<unordered_set>
using namespace std;

int main()
{
    //creation
    set<int> s;

    //insertion
    //member function

    //01 ->insert()
    s.insert(12);
    s.insert(11);
    s.insert(12);
    s.insert(10);
    s.insert(1);
    s.insert(19);

    //02->begin() 
    //03->end()

    set<int>::iterator it=s.begin();

    while(it!=s.end())
    {
        cout << *it << " " ;
        it++;
    }

    //04->size()

    cout << "Size-> " << s.size() << endl;

    //05-> erase()

    cout << "element before erase-> " << *(s.begin()) << endl;
    s.erase(s.begin());
    cout << "element after erase-> " << *(s.begin()) << endl;

    //06->empty()
    if(s.empty())
    {
        cout << "Set is empty" << endl;
    }
    else{
        cout << "Set is not empty" << endl;
    }

    //07 ->count()
    cout <<"Check occurence of 12 is present or not->" << s.count(12) << endl;    
    cout <<"Check occurence of 13 is present or not->" << s.count(13) << endl;    

    //08 -> find()
    auto it1=s.find(12);
    cout << "Element is -> " << *it1 << endl;

    //09 -> clear()
    cout << "Size before clear-> " << s.size() << endl;
    s.clear();
    cout << "Size after clear-> " << s.size() << endl;











    return 0;
}