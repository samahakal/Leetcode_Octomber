// 91. Decode Ways
// https://leetcode.com/problems/decode-ways/description/

class Solution {
public:
    int solve(string s,int i,vector<int>&dp){
        // base case
        if(i==s.size()){
            return 1;
        }
        
        // dp condition
        int &ans = dp[i];
        if(ans != -1){
            return ans;
        }
        
        
        // if zero occur then return 0 because "04" or "05" not possible as give and it can occur only at last position when we considering 2 digit number
        if(s[i]=='0'){
            return ans = 0;
        }
        
        // small call
        // take two call one for 'one digit number' and another for 'two digit number'
        int call_1 = 0, call_2 = 0;
        
        // for one digit
        call_1 = solve(s,i+1,dp);
        
        // check two digit possible or not if i is at last index then it not possible to call there next index
        if(i<s.size()-1){
            
            // check it lie in range of 1 to 26 or not if lie then call for i+2
            if((s[i]=='1') || (s[i]=='2' and (s[i+1]>='0' and s[i+1]<='6'))){                                              
                call_2 = solve(s,i+2,dp);
            }
        }     
        
        // store the addition of both call in ans and return it
        return ans = call_1 + call_2;                 
    }
                   
    int numDecodings(string s) {
        vector<int>dp(s.size()+1,-1);
        return solve(s,0,dp);
    }
};
