#include<iostream>
#include<forward_list>
#include<list>
#include<vector>
using namespace std;

int main()
{

    // forward_list<int> list;

    // list.push_front(10);
    // list.push_front(20);
    // list.push_front(30);
    // list.push_front(40);
    // list.push_front(50);

    // //01-> Forward iterator

    // forward_list<int>:: iterator it=list.begin();

    // while(it != list.end())
    // {
    //     *(it)=(*it)+1;
    //     cout << *it << endl;
    //     it++;
    // }

    //02-> bidirectironal iterator
    list<int> mylist;

    mylist.push_back(11);
    mylist.push_back(15);
    mylist.push_front(1);
    mylist.push_front(10);
    mylist.push_back(19);

    list<int>:: iterator it1=mylist.begin();

    while(it1 != mylist.end())
    {
        (*it1)=(*it1)+3;
        cout << *it1 << " ";
        it1++;
    }

    cout << endl;
    list<int>:: iterator it2=mylist.end();
    it2--;
    
    while(it2 != mylist.begin())
    {   
        //write
       (*it2)=(*it2)+1;
       //read
        cout << *it2 << " ";
        it2--;
    }


    //03 -> random access iterator

    vector<int> v={1,2,3,4,5,6};
    vector<int>:: iterator it3=v.begin()+4;


    cout << endl << *it3;
    

    






    return 0;
}