// https://leetcode.com/problems/break-a-palindrome/description/
// 1328. Break a Palindrome

class Solution {
public:
    string breakPalindrome(string palindrome) {
        int n = palindrome.size();
       
        if(n == 1){
            return "";
        }

        bool change = false;
        for(int i=0;i<n;i++){
            if(palindrome[i]!='a'){
                if(n%2!=0 and n/2==i){   // if length is odd and mid index 
                    continue;
                }
                palindrome[i] = 'a';
                change = true;
                break;
            }
        }
        

        if(change){
            return palindrome;
        }
        else{
            palindrome[n-1] = 'b';
            return palindrome;
        }
    }
};
