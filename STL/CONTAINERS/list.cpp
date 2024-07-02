#include<iostream>
#include<list>

using namespace std;

int main()
{

    //creation of list
    list<int> mylist;

    //insertion 

    //member functions

    //01 -> push_back()
    //02-> push_front()

    mylist.push_back(20);
    mylist.push_back(25);
    mylist.push_front(30);
    mylist.push_back(35);
    mylist.push_front(40);


    //accessing element

    //03-> front()
    //04 -> back()

    cout << "First element-> " << mylist.front() << endl;
    cout << "Last element-> " << mylist.back() << endl;

    //traverse

    // 05 -> begin()
    //06 -> end()
    list<int>::iterator it=mylist.begin();
    while(it!=mylist.end())
    {
        cout << *it << " ";
        it++;
    }
    cout << endl;

    // 07-> size()

    cout << "Size of list-> " << mylist.size() << endl;

    //08 -> clear()

    mylist.clear();

    cout << "Size of after clear list-> " << mylist.size() << endl;

    //09 -> empty()

    if(mylist.empty()==0)
    {
        cout << "List is not empty" << endl;
    }
    else{
        cout << "List is empty" << endl;
    }

    list<int> newlist;

    newlist.push_back(11);
    newlist.push_back(12);
    newlist.push_back(13);
    newlist.push_back(14);
    newlist.push_back(15);

    if(newlist.empty()==0)
    {
        cout << "NEW List is not empty" << endl;
    }
    else{
        cout << "NEW List is empty" << endl;
    }

    //10 -> pop_back()

    cout << "Last element before pop operation -> " << newlist.back() << endl;
    newlist.pop_back();
    cout << "Last element after pop operation -> " << newlist.back() << endl;

    //11 -> pop_front()
    cout << "First element before pop operation -> " << newlist.front() << endl;
    newlist.pop_front();
    cout << "First element after pop operation -> " << newlist.front() << endl;

    //12 -> remove()

    // cout << "First element before removal-> " << mylist.front() << endl;
    // mylist.remove(1);
    // cout << "First elemet after removal-> " << mylist.front() << endl;

    // //13-> insert()

    cout << "front element before insert->" << newlist.front() << endl;
    newlist.insert(newlist.begin(),9);
    cout << "front element after insert->" << newlist.front() << endl;


    //14 -> erase()

    cout << "First element before erase operation-> " << newlist.front() << endl;
    newlist.erase(newlist.begin());
    cout << "First element after erase operation-> " << newlist.front() << endl;

    cout << "Before erase operation" << endl;

    if(newlist.empty()==0)
    {
        cout << "List is not empty" << endl;
    }
    else{
        cout << "List is not empty" << endl;
    }

    newlist.erase(newlist.begin(),newlist.end());

    cout << "After erase operation" << endl;

    if(newlist.empty()==0)
    {
        cout << "List is not empty" << endl;
    }
    else{
        cout << "List is empty" << endl;
    }

    //15 -> swap()

    list<int> first={10,20,30,40};
    list<int> second={100,200,300,400};

    cout << "Fisrt list before swap->" << endl;

    list<int>::iterator i1=first.begin();

    while(i1 !=first.end())
    {
        cout << *i1 << " ";
        i1++;
    }

    cout << endl;

    first.swap(second);

    cout << "Fisrt list after swap->" << endl;

    list<int>::iterator i=first.begin();

    while(i!=first.end())
    {
        cout << *i << " ";
        i++;
    }

    return 0;
}