class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        
        sort(nums.begin(), nums.end());
        int n = nums.size();
        if(n<3)
            return res;
        if(n==3 && nums[0] + nums[1] + nums[2]==0){
            res.push_back({nums[0], nums[1], nums[2]});
            return res;
        }
        if(nums[0] > 0)
            return {};
        if(nums[0]==nums[n-1]){
            if(nums[0]==0){
                res.push_back({0,0,0});
                return res;
            }
            else
                return {};
        }
        for(int i=0; i<n; i++){
            if(nums[i]>0)
                break;
            if(i > 0 && nums[i] == nums[i - 1])
                continue;
            int j = i+1;
            int k = n-1;
            while(j<k){
                int s = nums[i] + nums[j] + nums[k];
                if(s<0)
                    j++;
                else if(s>0)
                    k--;
                else{
                    res.push_back({nums[i], nums[j], nums[k]});
                    int lo = nums[j];
                    int hi = nums[k];
                    while(j<k && nums[j]==lo)
                        j++;
                    while(j<k && nums[k]==hi)
                        k--;
                }
            }
        }
        // int j=0;
        // for(int i=0; i<res.size(); i++){
        //     if(res[i]!=res[j]){
        //         j++;
        //         res[j] = res[i];
        //     }
        // }
        // vector<vector<int>> ans;
        // for(int i=0; i<j; i++)
        //     res.push_back(ans[i]);
        return res;
    }
};