class Solution {
public:

//   692. Top K Frequent Words  
// https://leetcode.com/problems/top-k-frequent-words/
  static bool cmp(pair<int,string>p1,pair<int,string>p2){
        if(p1.first == p2.first){
            return p1.second<p2.second;
        }
        return p1.first>p2.first;
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<pair<int,string>>pq;
        unordered_map<string,int>m;
        int n = words.size();

        // map
        for(int i=n-1;i>=0;i--){
            m[words[i]]++;
        }
        
        // vector with count and string
        for(auto it : m){
            pq.push_back({it.second,it.first});
        }


        // sort the vector in decreasing order of count and inc. lexiographical order
        sort(pq.begin(),pq.end(),cmp);

        vector<string>v;
        int i = 0;
        while(k--){
            v.push_back(pq[i++].second);
        }

        
        return v;
    }
};
