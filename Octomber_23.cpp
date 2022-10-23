// 645. Set Mismatch
// https://leetcode.com/problems/set-mismatch/description/
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        long sum1 = 0;
        long sum2 = 0;

        long k = 1;
        for(auto it : nums){
            sum1 += it;
            sum2 += it*it;

            sum1 -= k;
            sum2 -= k*k;
            k++;
        }
        // we have sum1 = a-b  and sum2 = a^2 - b^2    --- a is repetable and b is missing element
        // a^2 - b^2 = (a - b)(a + b)      ->    a + b = (a^2 - b^2)/(a - b)

        long sum3 = sum2/sum1;

        int a = (sum1 + sum3)/2;
        int b = sum3 - a;
        
        vector<int>v = {a,b};
        return v;
    }
};
