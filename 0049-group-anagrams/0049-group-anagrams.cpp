class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hash;
        
        for(auto x : strs) {
            string t = x;
            sort(t.begin(), t.end());
            hash[t].push_back(x);
        }
        
        vector<vector<string>> ans;
        
        for(auto& x : hash)
            ans.push_back(x.second);
        
        return ans;
    }
};