class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        int temp = nums[0];
        if(n==1)
            return 1;
        // vector<vector<int>> dp(n+1, vector<int>(n+1,0));
        vector<int> dp(n,1);
        int ans = 0;
        for(int i=1; i<n; i++){
            for(int j=0; j<i; j++){
                if(nums[i]>nums[j])
                    dp[i] = max(dp[i], dp[j]+1);
            }
            ans = max(ans, dp[i]);
        }
        return ans;
    }
};
// class Solution {
// public:
//     int lengthOfLIS(vector<int>& nums) {
//         int len = 0;
//         for(int i=0; i<nums.size(); i++) 
//             if(len == 0 || nums[len-1] < nums[i])
//                 nums[len++] = nums[i];
//             else 
//                 *lower_bound(nums.begin(), nums.begin() + len, nums[i]) = nums[i];
//         return len;
//     }
// };