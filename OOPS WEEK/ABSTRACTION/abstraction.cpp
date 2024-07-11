// #include<iostream>
#include <bits/stdc++.h>

#include"birds.h"
using namespace std;

void birdsfunctions(bird *& bird)
{
    bird->eat();
    bird->fly();
}

int main()
{

  //  bird *bird=new peacock();
   // birdsfunctions(bird);

   bird *bird=new pigeon();
    birdsfunctions(bird);

    return 0;
}