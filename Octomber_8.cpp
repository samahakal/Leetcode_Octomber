// https://leetcode.com/problems/3sum-closest/description/
// 16. 3Sum Closest
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        // -4 -1 1 1 2 2   
        int n = nums.size();
        int ans = 1e7;
        int sum = 0;
        sort(nums.begin(),nums.end());

        for(int i=0;i<n;i++){
            int k = nums[i];
            sum = 0;
            int st = i+1;
            int en = n-1;
            while(st<en){
                sum = nums[st] + nums[en] + k;
                if(abs(ans-target) > abs(sum-target)){
                    ans = sum;
                }
                if(sum == target){
                    return target;
                }
                else if(sum<target){
                    st++;
                }
                else{
                    en--;
                }
            }  
        }
        return ans;
    }
    
};

