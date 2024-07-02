#include<iostream>
#include<deque>
using namespace std;

int main()
{

    //creation and insertion

    deque<int> dq(6);
    deque<int> d(6,9);
    deque<int> first={1,2,3,4,5};

    //insertion

    //member functions

    //01 -> push_back()

    first.push_back(20);
    first.push_back(120);
    first.push_back(220);

    //02 ->push_front()

    first.push_front(130);
    first.push_front(100);
    first.push_front(110);

    // 03 ->begin()
    cout << " First element of deque->" << *(first.begin()) << endl;

    //04 ->end()
    cout << "Last elemet of deque-> " << *(first.end()-1) << endl;

    //05 ->size()
    cout << "Size of deque-> "<< first.size() << endl;

    //06 ->empty()
    if(first.empty())
    {
        cout << "Deque is empty" << endl;
    }
    else{
        cout << "Deque is not empty" << endl;
    }

    //07 -> front()
    cout << "First element of deque->" << first.front() << endl;

    //08 -> back()
    cout << "Last elemet of deque-> " << first.back() << endl;

    //09 ->operator[]

    cout << "Element of Deque at 0 index-> " << first[0] << endl;
    cout << "Element of Deque at 1 index-> " << first[1] << endl;
    cout << "Element of Deque at 2 index-> " << first[2] << endl;
    cout << "Element of Deque at 3 index-> " << first[3] << endl;
    cout << "Element of Deque at 4 index-> " << first[4] << endl;
    cout << "Element of Deque at 5 index-> " << first[5] << endl;
    cout << "Element of Deque at 6 index-> " << first[6] << endl;
    cout << "Element of Deque at 7 index-> " << first[7] << endl;

    //10 -> at

    cout << "Element of Deque at 0 index-> " << first.at(0) << endl;
    cout << "Element of Deque at 2 index-> " << first.at(2) << endl;
    cout << "Element of Deque at 5 index-> " << first.at(5)<< endl;
    cout << "Element of Deque at 6 index-> " << first.at(6)<< endl;

    //11 ->insert()

    cout << "Element of Deque at 5 index before insert operation-> " << *(first.begin()+5) << endl;
    first.insert(first.begin()+5,26);
    cout << "Element of Deque at 5 index after insert operation-> " << *(first.begin()+5) << endl;

    //12 ->erase()

    cout << "Element of Deque at 7 index before erase operation-> " << *(first.begin()+7) << endl;
    first.erase(first.begin()+7);
    cout << "Element of Deque at 7 index after erase operation-> " << *(first.begin()+7) << endl;

    //elemets printing using iterator
    cout << "elements before erase operation" << endl;

    deque<int>::iterator it=first.begin();

    while(it!=first.end())
    {
        cout << *it << " ";
        it++;
    }
    first.erase(first.begin()+7,first.begin()+11);

    cout << "elements after erase operation" << endl;

    it=first.begin();

    while(it!=first.end())
    {
        cout << *it << " ";
        it++;
    }
    cout << endl;

    cout << "Size of deque before clear operation -> " << first.size() << endl;
    first.clear();
    cout << "Size of deque after clear operation -> " << first.size() << endl;

    //13-> swap()

    deque<int>d1={10,20,30,40,50,60};
    deque<int>d2={100,200};

    cout << "Elements of deque d1 before swap" << endl;

    for(auto i:d1)
    {
        cout << i << " ";
    }

    cout << endl;
    d1.swap(d2);
    cout << "Elements of deque d1 after swap" << endl;

    for(auto i:d1)
    {
        cout << i << " ";
    }







    











    return 0;
}