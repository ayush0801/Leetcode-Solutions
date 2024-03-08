class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        vector<int> occ(100, 0);
        int mx = 0;
        for(int i=0; i<n; i++){
            occ[nums[i]-1]++;
            mx = max(occ[nums[i]-1], mx);
        }
        
        for(int i=0; i<100; i++){
            if(occ[i]==mx)  ans += mx;
        }
        
        return ans;
    }
};