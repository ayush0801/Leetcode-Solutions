class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& arr) {
        int n = arr.size();
        vector<vector<int>> temp;
        vector<string> ans(n);
        for(int i=0; i<n; i++){
            temp.push_back({arr[i], i});
        }
        sort(temp.rbegin(), temp.rend());
        string s = "";

        for(int i=0; i<n; i++){
            if(i==0)        s = "Gold Medal";
            else if(i==1)   s = "Silver Medal";
            else if(i==2)   s = "Bronze Medal";
            else            s = to_string(i+1);
            ans[temp[i][1]] = s;
        }
        
        return ans;
    }
};