//Leetcode 49. Group Anagrams

// class Solution {
// public:
//     vector<int> makeFrequency(string s){

//         //total characters are 256, so their index will start from 0 to 256 
//         //we use ascii value of character as index and store their count at their
//         //corresponding ascii value index
//         vector<int> frequency(266, 0);
//         for(auto i : s)
//         {
//             int index = i - '0';
//             frequency[index]++;
//         }
//         return frequency;
//     }

//     vector<vector<string>> groupAnagrams(vector<string>& strs) {

//         //step 01-> create a unordered_map of string to frequency array of that string
//         unordered_map<string, vector<int>> frequencyMap;
//         for(auto i : strs)
//         {
//             frequencyMap[i] = makeFrequency(i);
//         }
//         //stpe 02-> create a unordered_map of frequency array to vector of string
//         //note-> unordered_map not consider vector as key, but ordered map can so that's why 
//         //we use ordered map
//         map<vector<int>, vector<string>> anagramMap;

//         for(auto i : strs)
//         {
//             vector<int> temp = frequencyMap[i]; 
//             anagramMap[temp].push_back(i);
//         }

//         //note -> if strings are anagrams than their frequency array will same
//         //so we can use that frequency array as a key. 
//         vector<vector<string>>answer;

//         for(auto it = anagramMap.begin(); it != anagramMap.end(); it++)
//         {
//             answer.push_back(it->second);
//         }
//         return answer;        
//     }
// };