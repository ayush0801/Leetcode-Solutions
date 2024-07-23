class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n = arr.size();
        int ans = 0;
        int mn = arr[0];
        for(int i=1; i<n; i++){
            ans = max(ans, arr[i] - mn);
            mn = min(mn, arr[i]);
        }
        return ans;
    }
};