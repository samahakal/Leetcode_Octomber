// https://leetcode.com/problems/contains-duplicate-ii/submissions/827054491
// 219. Contains Duplicate II

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            if(mp.count(nums[i])>0){
                if(abs(i-mp[nums[i]])<=k){
                    return true;
                }
            }
            mp[nums[i]] = i;
        }
        return false;
    }
};
