//Leetcode 30. Substring with Concatenation of All Words

// class Solution {
// public:
//     vector<int> findSubstring(string s, vector<string>& words) {
        
//         vector<int> ans;
//         //pehla step words vector ki string ki frequency store kro
//         //is frequncy se hum particular answer substring ko check kr skte h valid h ya nhi
//         unordered_map<string, int> mp;
//         int i = 0;
//         while(i < words.size())
//         {
//             mp[words[i]]++;
//             i++;
//         }

//         //abb offset method ka use kr ke substring find krenge 
//         //aur hr substring ko ek visited unordered_map mai store 
//         //krnege jis se asnwer dhund paye
       
          
//         //offset method ->
//         //pehle 0 se substring find kro
//         //fir 1 se substring find kro
//         //jb tk words[0].length tk na pauch jao
//         int  wordLength = words[0].size();

//         for(int offset = 0; offset < wordLength; offset++)
//         {
//             //unordered_map bnao jis se ye track kr pao 
//             //ki particular substring answer ka part hogi ya nhi
//             unordered_map<string, int> visited;

//             //aur count ko 0 rkho, jo btaega ki answer substring mili h ya nhi
//             int count = 0;

//             for(int i = offset; i + wordLength <= s.size(); i += wordLength)
//             {
//                 string temp = s.substr(i, wordLength);

//                 //check kro string valid h ya nhi
//                 //agr string found that means valid
//                 if(mp.find(temp) != mp.end())
//                 {
//                     //mark kro visited h ya nhi
//                     visited[temp]++;
//                     count++;

//                     //visited mark ke baad check kro current substring ka count extra to nhi
//                     //agr extra h to remove kr do count
//                     while(visited[temp] > mp[temp])
//                     {
//                         string str = s.substr(i - (count - 1) * wordLength, wordLength);
//                         visited[str]--;
//                         count--;
//                     }

//                     //check kro answer mila h ya nhi
//                     if(count == words.size())
//                     {
//                         //answer found
//                         //find kro starting index of answer
//                         int index = i - (count - 1) * wordLength;
//                         ans.push_back(index);
//                     }

//                 }
//                 else{
//                     //agr string not found that means invalid
//                     //invalid hai to sara fir se start krna pdega
//                     //to piche ka sara track clear kro
//                     visited.clear();
//                     count = 0;
//                 }
//             }
//         }
//         return ans;
//     }
// };   