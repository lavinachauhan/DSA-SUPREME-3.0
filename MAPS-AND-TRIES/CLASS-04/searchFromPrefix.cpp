#include<bits/stdc++.h>
using namespace std;

class TrieNode{
    public:
    char value;
    unordered_map<char, TrieNode*> children;
    bool isTerminal;

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

void FindAnswers(TrieNode* root, string &ans, vector<string> &tempAns){

        if(root -> isTerminal)
        {
            tempAns.push_back(ans);
            //return isiliye nhi kiya
            //eg Car, Care , Caring  wale case mai sirf Car print hoga
            //agr return kr diya to kyoki r ek terminal node hogi
        }

        TrieNode* child; 
        for(auto it = root -> children.begin(); it != root -> children.end(); it++)
        {
            char ch = it -> first;
            ans.push_back(ch);
            child = it -> second;
            FindAnswers(child, ans, tempAns);
            ans.pop_back();
        }
}


void searching(TrieNode* root, string word, string &ans, vector<string> &tempAns)
{
    //base case
    if(word.size() == 0)
    {   
        FindAnswers(root, ans, tempAns);
        return;
    }

    char ch = word[0];
    TrieNode* child;
    //case 01-> character found
    if(root -> children.count(ch) == 1){
        ans.push_back(ch);
        child = root -> children[ch];
    }
    //case 02 -> character not found
    else{
        return;
    }
   searching(child, word.substr(1), ans, tempAns);
    return;
}

vector<vector<string>> getSuggestion(TrieNode* root, string prefix){
    vector<vector<string>> finalAns;

    string temp = "";
    for(int i = 0; i < prefix.size(); i++)
    {
        vector<string>tempAns;
        temp.push_back(prefix[i]);
        string ans = "";
        searching(root, temp, ans, tempAns);
        finalAns.push_back(tempAns);
    }

    for(int i = 0; i < finalAns.size(); i++)
    {
        for(int j = 0; j < finalAns[i].size(); j++)
        {
            cout << finalAns[i][j] << " ";
        }
        cout << endl;
    }

}


int main()
{
    TrieNode* root = new TrieNode('-');
    insertion(root, "baby");
    insertion(root, "babu");
    insertion(root, "bala");
    insertion(root, "baker");
    insertion(root, "babbar");
    insertion(root, "bali");
    insertion(root, "ashi");
    insertion(root, "lavi");
    insertion(root, "Car");
    insertion(root, "Care");
    insertion(root, "Caring");
    insertion(root, "Care");
    insertion(root, "Caring");

    string prefix;
    cout << "Enter the prefix to find -> ";
    cin>> prefix;

    getSuggestion(root, prefix);
    return 0;
}