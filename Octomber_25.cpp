// 1662. Check If Two String Arrays are Equivalent
// https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/description/


class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1 = "";
        string s2 = "";

        for(auto ch : word1){
            s1 += ch;
        }

        for(auto ch : word2){
            s2 += ch;
        }

        return s1 == s2;
    }
};
