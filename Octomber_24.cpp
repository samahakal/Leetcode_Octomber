// 1239. Maximum Length of a Concatenated String with Unique Characters
// https://leetcode.com/problems/maximum-length-of-a-concatenated-string-with-unique-characters/description/


class Solution {
public:
    bool check(string a,vector<int>v){
        bool flag = true;
        for(int i=0;i<a.size();i++){
            if(v[a[i]-'a']!=0){
                flag = false;
            }         
            v[a[i]-'a']++;
        }

        for(int i=0;i<a.size();i++){
            v[a[i]-'a']--;
        }
        return flag;
    }

    int solve(vector<string>&arr, vector<int>v, int i){
        if(i >= arr.size()){
            return 0;
        }
        int call_1 = 0, call_2 = 0;
        call_2 = solve(arr,v,i+1);
        if(check(arr[i],v)){            
            for(int j=0;j<arr[i].size();j++){
                v[arr[i][j]-'a']++;
            }
            call_1 = arr[i].size() + solve(arr,v,i+1);
        }
        return max(call_1,call_2);
    }

    int maxLength(vector<string>& arr) {
        vector<int>v(26,0);
        return solve(arr,v,0);
    }
};
