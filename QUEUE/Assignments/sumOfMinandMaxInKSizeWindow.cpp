#include<bits/stdc++.h>
using namespace std;
int minMaxSlidingWindow(vector<int>& nums, int k) {

        deque<int> q, q2;
        int ans = 0;
        int n = nums.size();
        int mini;
        int maxi;
        //step 01-> process the first window
        for(int i = 0; i < k; i++) 
        {
            while(!q.empty() && nums[q.back()] <= nums[i]) q.pop_back();
            q.push_back(i);

            while(!q2.empty() && nums[q2.back()] >= nums[i]) q2.pop_back();
            q2.push_back(i);
        }

        maxi = nums[q.front()];
        mini = nums[q2.front()];

        ans += maxi + mini; 

        //step 02-> process remainimg window
        for(int i = k; i < n; i++)
        {
            //step 2.1-> remove the index which is not the part of current window
            while(i - q.front() == k) q.pop_front();
            while(i - q2.front() == k) q2.pop_front();
          
            while(!q.empty() && nums[q.back()] <= nums[i]) q.pop_back();
            q.push_back(i);

            while(!q2.empty() && nums[q2.back()] >= nums[i]) q2.pop_back();
            q2.push_back(i);

            maxi = nums[q.front()];
            mini = nums[q2.front()];

            ans += maxi + mini; 
        }
        return ans;
    }
int main()
{
    vector<int> nums = {2, 5, -1, 7, -3, -1, -2};
    int k = 4;
    cout << minMaxSlidingWindow(nums, k);
    return 0;
}
