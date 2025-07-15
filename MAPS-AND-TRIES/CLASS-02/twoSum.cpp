//Leetcode 01 Two Sum


// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
        
//         unordered_map<int, vector<int>>mp;
//         for(int i = 0; i < nums.size(); i++){
//             mp[nums[i]].push_back(i);
//         }
//         //different testcases

//         for(int i = 0; i < nums.size(); i++)
//         {
//             int currentElement = nums[i];
//             int requiredElement = target - currentElement;
            
//             if(mp.find(requiredElement) != mp.end()){

//                 //01-> when requiredElement and currentElement are same and 
//                 //their indexes are also same
//                 if(requiredElement == currentElement && mp[requiredElement].size() == 1)
//                 continue;
            
//                 //02 ->  when requiredElement and currentElement are same and 
//                 //their indexes are different   
//                 else if(requiredElement == currentElement && mp[requiredElement].size() > 1)
//                 return {mp[requiredElement][0], mp[requiredElement][1]};
            
//                 //03-> when requiredElement and currentElement are different 
//                 else
//                 return {i, mp[requiredElement][0]};
//             }
//         }
//         return {-1, -1};
//     }
// };