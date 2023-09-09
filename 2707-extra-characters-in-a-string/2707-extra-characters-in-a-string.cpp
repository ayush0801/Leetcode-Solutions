class Solution {
public:
        long long maxStrength(vector<int>& nums) {
        int n = nums.size();
        long long ans = 0;
        vector<int> a;
        for(int i=0; i<n; i++){
            if(nums[i]<0){
                nums[i] = nums[i]*(-1);
                a.push_back(nums[i]);
            }
            else if(nums[i]>0){
                if(ans==0)  ans+=nums[i];
                else    ans*=nums[i];
            }
        }
        sort(a.begin(), a.end());
        if(a.size()==0) return ans;
        if(a.size()%2==0){
            if(ans==0)  ans=1;
            for(int i=0; i<a.size(); i++){
                ans*=a[i];
            }
            return ans;
        }
        else{
            if(ans==0)  ans=1;
            for(int i=0; i<a.size()-1; i++){
                ans*=a[i];
            }
            return ans;
        }
        return ans;
    }
    int minExtraChar(string s, vector<string>& dictionary) {
        int n = s.length();
        vector<int> dp(n + 1, 0);

        for (int i = 1; i <= n; ++i) {
            dp[i] = dp[i - 1] + 1;  // Initialize dp[i] with dp[i - 1] + 1

            for (const string& word : dictionary) {
                if (i >= word.length() && s.substr(i - word.length(), word.length()) == word) {
                    int j = i - word.length();
                    dp[i] = min(dp[i], dp[j]);  // Update dp[i] with the minimum value
                }
            }
        }

        return dp[n];
    }
};