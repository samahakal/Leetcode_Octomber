// 1578. Minimum Time to Make Rope Colorful
// https://leetcode.com/problems/minimum-time-to-make-rope-colorful/description/
class Solution {
public:

    int minCost(string colors, vector<int>& neededTime) {
        // size of colors
        int n = neededTime.size();
        

        // store answer
        int ans = 0;

        // iterate on color string
        for(int i=0;i<n;i++){

            int sum = neededTime[i];
            int curr = neededTime[i];

            // for consecutive color
            // find max and sum  
            while(i<n and colors[i] == colors[i+1]){
                curr = max(curr,neededTime[i+1]);
                sum += neededTime[i+1];
                i++;
            }

            // we want minimum sum of all consecutive  hence substract max num from sum
            ans += sum - curr;
        }
        return ans;
    }
};
