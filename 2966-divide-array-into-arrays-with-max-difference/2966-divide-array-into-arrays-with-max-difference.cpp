class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int> temp;
        int c = 1;
        for(int i=0; i<nums.size(); i++){
            temp.push_back(nums[i]);
            c++;
            if(c==4){
                c=1;
                ans.push_back(temp);
                temp.clear();
            }
        }
        
        for(int i=0; i<ans.size(); i++){
            if(ans[i][2] - ans[i][0]>k)
                return {};
        }
        return ans;
    }
};