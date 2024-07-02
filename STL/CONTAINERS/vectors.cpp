#include<iostream>
#include<vector>
using namespace std;

int main()
{
    //creation 
    // ->1
    vector<int> v1;

    // -> 2
   // vector<int> v2(5);

    // ->3 // 0 is the value at every index
   // vector<int> v3(5,0);
    
    //insertion
    v1={1,2,3,4,5};
   // v2={2,3,4,5,6};



    //MEMBER FUNCTIONS OF VECTOR

    // 1-> begin()
    cout << "First element of vector -> "<< *(v1.begin()) << endl ;

    // 2-> end()
    cout << "Last element of vector -> " << *(v1.end()-1) << endl;

    //3 -> size()
    cout << "Size of vector " << v1.size() << endl;

    //4 -> empty()
    if(v1.empty())
    {
        cout << "Vector is empty" << endl;
    }
    else{
        cout << "Vector in not empty" << endl;
    }

    //5 -> capacity()
    cout << "Vector capacity ->" << v1.capacity() << endl;

    //6 -> front()
    cout << "Front element is " << v1.front() << endl;

    //7 -> back()
    cout << "Last element is " << v1.back() << endl;

    //8 ->operator[]
    cout << "Element at index 0 -> " << v1[0] << endl;
    cout << "Element at index 3 -> " << v1[3] << endl;
    cout << "Element at index 4 -> " << v1[4] << endl;
    cout << "Element at index 2 -> " << v1[2] << endl;

    //9 -> at() 
    cout << "Element at index 1 -> " << v1.at(1) << endl;
    cout << "Element at index 4 -> " << v1.at(4) << endl;
    cout << "Element at index 3 -> " << v1.at(3) << endl;
    cout << "Element at index 2 -> " << v1.at(2) << endl;

    //10 -> push_back()
    v1.push_back(6);
    v1.push_back(7);

    //print elements using iterator

    vector<int>::iterator it1=v1.begin();

    while(it1 != v1.end())
    {
        cout << *it1 << " ";
        it1++;
    }

    cout << endl;

    //11 ->insert()
    v1.insert(v1.begin(),10);
    v1.insert(v1.begin()+3 ,20);

    cout << "Elements printing after insert operation->" << endl;

    vector<int>::iterator it=v1.begin();

    while(it != v1.end())
    {
        cout << *it << " ";
        it++;
    }

    //12 ->pop back()
    v1.pop_back();
    v1.pop_back();

    cout << "Elements printing after pop operation->" << endl;

    vector<int>::iterator it2=v1.begin();

    while(it2 != v1.end())
    {
        cout << *it2 << " ";
        it2++;

    }

    cout << endl;

    //13 -> erase()
    
    cout << "element before erase-> " << *(v1.begin()+3) << endl;
    v1.erase(v1.begin()+3);
    cout << "element after erase-> " << *(v1.begin()+3) << endl;

    // 14-> clear()
    cout << "Vector size before clear -> " << v1.size() << endl;
    v1.clear();
    cout << "Vector size after clear -> " << v1.size() << endl;

    //15-> reserve()
    vector<int> v;
    cout << "Capacity of vector v before reserve-> " << v.capacity() << endl;
    v.reserve(10);
    cout << "Capacity of vector v after reserve-> " << v.capacity() << endl;

    // 16->max_size()
    cout << "Maximum size of a vector ->" << v.max_size() << endl;

    //17 -> swap()

    vector<int> first={10,20,30,40};
    vector<int> second={100,200,300,400};

    first.swap(second);

    cout << "FIRST vector is swappped with SECOND->" << endl;

    cout << first[0] << " " << first[1] << " " << first[2] << " " << first[3] << " " << endl;

    return 0;
}