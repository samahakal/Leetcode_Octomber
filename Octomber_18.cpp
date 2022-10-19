// https://leetcode.com/problems/count-and-say/
// 38. Count and Say
class Solution {
public:
    string countAndSay(int n) {
        string s = "1";
        n--;
        while(n--){
            cout<<s<<endl;
            int i = 0;
            int len = s.size();
            string ss = "";
            while(i<len){
                int cnt = 1;
                char ch = s[i];
                while(i+1<len and s[i]==s[i+1]){
                    i++;
                    cnt++;
                }
                i++;
                ss += to_string(cnt) + ch;
            }
            s = ss;
        }
        return s;
    }
};
