// https://leetcode.com/problems/largest-perimeter-triangle/description/
// 976. Largest Perimeter Triangle

class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
     
        int i = n-3;
        while(i>=0){
            if(nums[i+2]<nums[i+1]+nums[i]){
                return nums[i]+nums[i+1]+nums[i+2];
            }
            i--;
        }
        return 0;
    }
};
