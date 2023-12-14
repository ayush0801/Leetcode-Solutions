class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& g) {
        int n = g.size();
        int m = g[0].size();
        vector<vector<int>> ans(n,vector<int>(m,0));
        vector<int> a(n);
        vector<int> b(m);
        for(int i=0; i<n; i++){
            int temp = 0;
            for(int j=0; j<m; j++){
                if(g[i][j]==0)  temp--;
                else    temp++;
            }
            a[i] = temp;
        }
        for(int j=0; j<m; j++){
            int temp = 0;
            for(int i=0; i<n; i++){
                if(g[i][j]==0)  temp--;
                else    temp++;
            }
            b[j] = temp;
        }
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                ans[i][j] = a[i] + b[j];
            }
        }
        return ans;
    }
};