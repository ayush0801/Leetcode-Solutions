class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n = arr.size();
        vector<int> dp(n, 0);
        
        int last = arr[0];
        for(int i=1; i<n; i++){
            if(arr[i]>last){
                dp[i] = dp[i-1] + arr[i] - last;
                last = arr[i];
            }
            else{
                dp[i] = dp[i-1];
                last = min(last, arr[i]);
            }
            // dp[i] = dp[i-1] + max(mx, )
        }
        return dp[n-1];
    }
};