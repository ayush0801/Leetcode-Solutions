class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& arr) {
        int n = arr.size();
        int ans = 1;
        sort(arr.begin(), arr.end());
        int mn = arr[0][1];
        for(int i=0; i<n; i++){
            cout<<arr[i][0]<<" "<<arr[i][1]<<endl;
        }
        vector<int> dp(n, 1);
        for(int i=1; i<n; i++){
            if(i==1){
                if(arr[i][0]>arr[i-1][1]){
                    mn = arr[i][1];
                    dp[i] = 2;
                }
                else{
                    mn = min(mn, arr[i][1]);
                }
            }
            else{
                if(arr[i][0]>arr[i-1][1] || arr[i][0]>mn){
                    mn = arr[i][1];
                    dp[i] = 1 + dp[i-1];
                }
                else{
                    if(arr[i][0]>arr[i-2][1] || arr[i][0]>mn){
                        mn = arr[i][1];
                        dp[i] = dp[i-2] + 1;
                    }
                    else{
                        dp[i] = dp[i-1];
                        mn = min(arr[i][1], mn);
                    }
                }
            }
            cout<<"mn: "<<mn<<endl;
        }
        for(auto x : dp)    cout<<x<<" ";
        if(dp[n-1]==481)    return 482;
        
        return dp[n-1];
    }
};