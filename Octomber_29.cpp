// 2136. Earliest Possible Day of Full Bloom
// https://leetcode.com/problems/earliest-possible-day-of-full-bloom/description/

class Solution {
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        int ans = 0;
        int sum = 0;
        int n = plantTime.size();

        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            v.push_back({growTime[i],plantTime[i]});
        }

        sort(v.begin(),v.end(),greater<pair<int,int>>());
        for(int i=0;i<n;i++){
            sum += v[i].second;
            ans = max(ans,sum+v[i].first);
        }
        return ans;
    }
};
