class Solution {
public:
    int numSquares(int n) {
        vector<int> dp(n+1, INT_MAX-1);
        dp[0] = 0;
        for(int i=0; i<n+1; i++){
            for(int j=1; j*j<=i; j++)
                dp[i] = min(dp[i], dp[i-j*j]+1);
        }
        return dp.back();
    }
};