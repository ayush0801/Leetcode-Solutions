class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans = {intervals[0]};
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]>ans.back()[1])
                ans.push_back(intervals[i]);
            else
                ans.back()[1] = max(ans.back()[1],intervals[i][1]);
        }
        return ans;
    }
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        return merge(intervals);
    }
};