// https://leetcode.com/problems/continuous-subarray-sum/description/
// 523. Continuous Subarray Sum

class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp = {{0,-1}};

        int sum = 0;        // mod sum

        for(int i=0;i<nums.size();i++){
            sum += nums[i];
            sum %= k;

            mp.insert({sum,i});  // insert only if not present
            
            if(i-mp[sum]>=2){
                return true;
            }
        }
        return false;
    }
};
