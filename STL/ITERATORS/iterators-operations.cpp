#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main()
{
    vector<int> v={1,2,3,4,5,6};

    //01-> *it -->it treturn value at current position

    vector<int>::iterator it=v.begin();
    cout << "Value at current position->"<< *it << endl;

    //02-> ++it, it++, it=it+1 -->it increment it position by one

    it++;
    cout << "After it++ it will print next value-> " << *it << endl;

    //03-> --it, it--, it=it-1 -->it decrement it position by one

    it--;
    cout << "After it-- it will print previous value-> " << *it << endl;

    //04-> it+i -->moves iterator by one position

    int i=3;
    it=it+i;
    cout << "After it+i it will print value at it+i position-> " << *it << endl;

    //05-> it1==it2 -->it compares two iterators retrun bool value

    auto it1=v.begin()+2;
    
    bool ans=it1==it;
    cout << ans << endl;

    //06-> it!=it2  -->returns bool value

    bool ans1=it1!=it;
    cout << ans1 << endl;

    //07-> it=it1 -->assign it1 iterator to it

    cout << "Value at it before assign->" << *it << endl;
    it=it1;
    cout << "Value at it after assign->" << *it << endl;


    //08-> it.m, it->m  -->return value of object pointed by the iterator

    unordered_map<int,char> mp;

    mp[1]='a';
    mp[2]='w';
    mp[3]='b';
    mp[4]='s';

    unordered_map<int,char>::iterator itr=mp.begin();

    cout << itr->first << " "<<  itr->second << endl;
    itr++;
    cout << itr->first << " "<<  itr->second <<endl;



    return 0;
}
