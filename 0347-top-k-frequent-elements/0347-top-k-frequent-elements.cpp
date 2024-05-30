class Solution {
public:
    vector<int> topKFrequent(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int> ans;
        unordered_map<int, int> hash;
        for(auto x : arr){
            hash[x]++;
        }
        
        vector<vector<int>> cnt(n+1);
        for (auto [a, b] : hash)
            cnt[b].push_back(a);
        
        for (int i = arr.size(); k; i--) {
            for (auto a : cnt[i]) {
                ans.push_back(a);
                k--;
            }
        }
        return ans;
        
    }
};