// 208. Implement Trie (Prefix Tree)

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

// bool searchHelper(TrieNode* root, string word){
//     //base case
//     if(word.size() == 0)
//     {
//         return root -> isTerminal;
//     }

//     char ch = word[0];
//     TrieNode* child;

//     //case 01-> character is present
//     if(root -> children.count(ch) == 1)
//     {
//         child = root -> children[ch];
//     }
//     //case 02 -> character is not present
//     else{
//         return false;
//     }

//     bool recursionAns = searchHelper(child, word.substr(1));
//     return recursionAns;
// }

// bool prefixHelper(TrieNode* root, string word){
//     //base case
//     if(word.size() == 0)
//     {
//         return true;
//     }

//     char ch = word[0];
//     TrieNode* child;

//     //case 01-> character is present
//     if(root -> children.count(ch) == 1)
//     {
//         child = root -> children[ch];
//     }
//     //case 02 -> character is not present
//     else{
//         return false;
//     }

//     bool recursionAns = prefixHelper(child, word.substr(1));
//     return recursionAns;
// }

// class Trie {
// public:
//     TrieNode* root = new TrieNode('_');
//     Trie() {
        
//     }
    
//     void insert(string word) {
//         insertHelper(root, word);
//     }
    
//     bool search(string word) {
//         return searchHelper(root, word);
        
//     }
    
//     bool startsWith(string prefix) {
//         return prefixHelper(root, prefix);
//     }
// };