// leetcode 14. Longest Common Prefix

// class TrieNode{
//     public:
//     char value;
//     unordered_map<char, TrieNode*> children;
//     bool isTerminal;

//     TrieNode(char data){
//         this -> value = data;
//         isTerminal = false;
//     }
// };

// void insertHelper(TrieNode* root, string word)
// {
//     //base case
//     if(word.size() == 0){
//         root -> isTerminal = true;
//         return;
//     }

//     char ch = word[0];
//     TrieNode* child;
//     //case 01-> character is present
//     if(root -> children.count(ch) == 1)
//     {
//         child = root -> children[ch];
//     }
//     //case 02 -> character is absent
//     else{
//        child = new TrieNode(ch);
//         //link
//         root -> children[ch] = child;
//     }

//     insertHelper(child, word.substr(1));
// }

// void findCommon(TrieNode* root, string word, string &ans){
//     if(root -> children.size() > 1) return;

//     char ch = word[0];
//     TrieNode* child;

//     if(root -> children.count(ch) == 1)
//     {
//         auto terminal = root -> children[ch];
//         if(terminal -> isTerminal){
//             ans += terminal -> value;
//             return;
//         }
//         else{
//             child = root -> children[ch];
//             ans += ch;
//         }
       
//     }
//     else return;   
//     findCommon(child, word.substr(1), ans);
// }


// class Solution {
// public:
//     string longestCommonPrefix(vector<string>& strs) {

//         TrieNode* root = new TrieNode('-');
//         for(auto i : strs)
//         {
//             if(i.size() == 0) return i;
//             insertHelper(root, i);
//         }

//         string ans = "";
//         findCommon(root, strs[0], ans);
//         return ans;
        
//     }
// };