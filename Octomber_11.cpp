// 334. Increasing Triplet Subsequence
// https://leetcode.com/problems/increasing-triplet-subsequence/

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int one = INT_MAX, two = INT_MAX;

        for(auto it : nums){
            if(it <= one){
                one = it;
            }

            else if(one < it and it <= two ){
                two = it;
            }

            else{
                return true;
            }
        }
        return false;
    }
};
