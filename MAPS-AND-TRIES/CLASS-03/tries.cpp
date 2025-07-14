#include<bits/stdc++.h>
using namespace std;

//Structure of TrieNode
class TrieNode{
    public:
    //TrieNode contains 
    //character
    char value;
    //unordered_map(to keep track of all childrens)
    unordered_map<char, TrieNode*> children;
    // bool variable (to check wheather current node is last character of a string or not)
    bool isTerminal;

    //constructor
    TrieNode(char data)
    {
        this -> value = data;
        isTerminal = false;
    }
};

void insertion(TrieNode* root, string word){
    //base case
    if(word.size() == 0)
    {
        root -> isTerminal = true;
        return;
    }

    char ch = word[0];
    TrieNode* child;
    
    if(root -> children.count(ch) == 1){
        //case 01-> character is present
        //present hai to uss node pr chale jao
        child = root -> children[ch];
    }
    else{
        //case 02-> character is absent
        //absent hai to to create kr do
        child = new TrieNode(ch);

        //link kr do current character ko uske children se
        root -> children[ch] = child;
    }

    insertion(child, word.substr(1));
}

bool searching(TrieNode* root, string word)
{
    //base case
    if(word.size() == 0)
    {
        //agr size 0 ho gya to check kro
        //ki current root node terminal hai yha nhi
        //mtlb jo string h wo ke complete word present h ya prefix present h
        return root -> isTerminal;
    }

    char ch = word[0];
    TrieNode* child;
    //case 01-> character found
    if(root -> children.count(ch) == 1){
        child = root -> children[ch];
    }
    //case 02 -> character not found
    else{
        return false;
    }
    bool RecursionAns = searching(child, word.substr(1));
    return RecursionAns;
}

void removal(TrieNode* root, string word)
{
    //base case
    //note -> characters memory se remove krna is not good practice
    //in case if current character have children that deleting it from memory wll affect other strings
    if(word.size() == 0)
    {
        root -> isTerminal = false;
        return;
    }
    //agr character present h to baki ki character check kro
    //agr last character pr aa gye ho to check kro current root terminal h ya nhi
    //agr terminal h to use false kr do
    //is se hum string ko memory se remove nhi kr skte lekin string ka terminal false krne se wo ab prefix bn jaegi ek complete string nhi
    //isiliye remove krne ke baad agr find krenge to nhi milegi wo string
    
    char ch = word[0];
    TrieNode* child;
    if(root -> children.count(ch) == 1)
    {
        child = root -> children[ch];
    }
    else return;
    removal(child, word.substr(1));

    //optional if we want to remove characters from memory also
    //but this will only valid for those nodes who have 0 children
    //that means current node is not contributing in other strings
    // if(child -> children.size() == 0)
    // {
    //    // cout << child -> value << " ";
    //     delete child;
    //     root -> children.erase(ch);
    // }
}
int main()
{
    //Sample root node
    TrieNode* root = new TrieNode('-');

    insertion(root, "count");
    // insertion(root, "cover");
    // insertion(root, "car");
    // insertion(root, "cold");
    // insertion(root, "tag");
    // insertion(root, "Tail");
    // insertion(root, "Tall");

    cout << "IsPresent -> " << searching(root, "count") << endl;
    cout << "IsPresent -> " << searching(root, "Tail") << endl;
    cout << "IsPresent -> " << searching(root, "Friend") << endl;

    removal(root, "count");
    cout << "After IsPresent -> " << searching(root, "count") << endl;
    removal(root, "Tail");
    cout << "After IsPresent -> " << searching(root, "Tail") << endl;


    return 0;
}