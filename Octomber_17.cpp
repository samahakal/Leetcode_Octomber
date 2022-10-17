// 1832. Check if the Sentence Is Pangram
// https://leetcode.com/problems/check-if-the-sentence-is-pangram/


// Method 1
class Solution {
public:
    bool checkIfPangram(string s) {
        int n = s.size();
        vector<int>arr(26,0);
        for(int i=0;i<n;i++){
            arr[s[i]-'a']++;
        }

        for(int i=0;i<26;i++){
            if(arr[i] == 0){
                return 0;
            }
        }
        return 1;
    }
};


Method 2
  class Solution {
public:
    bool checkIfPangram(string s) {
        int seen = 0;

        for(auto it : s){
            seen = seen | (1<<(it-'a'));
        }
        return seen == (1<<26)-1;
    }
};
