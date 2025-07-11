#include<bits/stdc++.h>
using namespace std;

int main()
{
   //creation of map
   unordered_map<int, string> uMap;
   map<int, string> oMap;

   //insertion
   //insert() and []
   uMap[2] = "Scorpio";
   uMap[3] = "Forturner";
   uMap[1] = "Creata";

   oMap[2] = "Scorpio";
   oMap[3] = "Forturner";
   oMap[1] = "Creata";

   //prints value according to key sorted order
   cout << "Printing ordered map: " << endl;
   for(auto i : oMap)
   {
        cout << i.first << " " << i.second << endl;
   }
   cout << endl;

   //print value in random order
   cout << "Printing unordered map: " << endl;
   for(auto i : uMap)
   {
        cout << i.first << " " << i.second << endl;
   }

   //search or find
   //count() and find()
   if(uMap.find(1) == uMap.end()){
        cout << "1 nahi mila" << endl;
   }
   else{
        cout << "1 mil gya hai" << endl;
   }

   if(uMap.count(30) == 0){
        cout << "30 nahi mila" << endl;
   }
   else{
        cout << "30 mil gya h" << endl;
   }
    return 0;
}