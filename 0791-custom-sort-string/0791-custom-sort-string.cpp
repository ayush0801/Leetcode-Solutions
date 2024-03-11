class Solution {
public:
    string customSortString(string order, string s) {
        string ans = "";
        unordered_map<char, int> hash;
        int n = s.size();
        for(auto x : s){
            hash[x]++;
        }
        
        for(auto x: order){
            int len = hash[x];
            while(len>0){
                ans += x;
                len--;
            }
            hash[x] = 0;
        }
        
        for(auto x : hash){
            int len = x.second;
            while(len>0){
                ans += x.first;
                len--;
            }
            x.second=0;
        }
        
        return ans;
    }
};