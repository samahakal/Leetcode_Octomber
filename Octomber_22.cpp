// https://leetcode.com/problems/minimum-window-substring/description/
// 76. Minimum Window Substring


class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>mp;
        unordered_map<char,int>window;
        int n1 = s.size();
        int n2 = t.size();

        string ans = "";

        for(auto ch : t){
            mp[ch]++;
        }

        int len = INT_MAX;
        int cnt = 0;
        int slow = 0;

        for(int i=0;i<n1;i++){
            char ch = s[i];
            if(mp.count(ch)!=0){
                window[ch]++;
                if(window[ch]<=mp[ch]){
                    cnt++;
                }
            }
            if(cnt >= n2){
                while(mp.count(s[slow])==0 || window[s[slow]]>mp[s[slow]]){
                    window[s[slow]]--;
                    slow++;
                }
                if(i-slow+1 < len){
                    len = i-slow+1;
                    ans = s.substr(slow,len);
                }
            }
        }
        return ans;

    }
};
