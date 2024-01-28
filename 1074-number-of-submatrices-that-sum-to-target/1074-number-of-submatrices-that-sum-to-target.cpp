class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& t, int target) {
        int m = t.size();
        int n = t[0].size();
        int ans = 0;
        for(int i=0; i<m; i++){
            for(int j=1; j<n; j++)
                t[i][j] += t[i][j-1];
        }
        
        unordered_map<int, int> mp;
        
        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                int temp = 0;
                mp = {{0,1}};
                for(int k=0; k<m; k++){
                    if(i>0)
                        temp += t[k][j] - t[k][i-1];
                    else
                        temp += t[k][j];
                    
                    if(mp.find(temp-target)!=mp.end())
                        ans += mp[temp-target];
                    mp[temp]++;
                }
            }
        }
        return ans;
    }
};