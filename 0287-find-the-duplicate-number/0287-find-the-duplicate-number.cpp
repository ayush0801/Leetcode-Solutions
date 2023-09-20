class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // int ans = 0;
        int n = nums.size();
        for(int i=0; i<n; i++){
            int index = abs(nums[i]) - 1;
            nums[index] *= -1;
            if(nums[index]>0)
                return abs(nums[i]);
        }
        return -1;
    }
};