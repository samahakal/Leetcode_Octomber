// https://leetcode.com/problems/time-based-key-value-store/description/
// 981. Time Based Key-Value Store


class TimeMap {
public:
    map<string,vector<pair<int,string>>>mp;

    void set(string key, string value, int timestamp) {
        mp[key].push_back({timestamp,value});
    }
    
    
    string get(string key, int timestamp) {
        string ans = "";
        int left = 0, right = mp[key].size()-1;
        int mid;
        while(left<=right){
            mid = (left+right)/2;
            if(mp[key][mid].first==timestamp){
                return mp[key][mid].second;
            }
            else if(mp[key][mid].first<timestamp){
                left = mid+1;
            }
            else{
                right = mid-1;
            }
        }
        if(right>=0){
            return mp[key][right].second;
        }
        return ans;
        
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */
