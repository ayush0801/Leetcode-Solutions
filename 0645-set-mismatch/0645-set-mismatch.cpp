class Solution {
public:
    vector<int> findErrorNums(vector<int>& arr) {
        int n = arr.size();
        vector<int> vis(n, 0);
        int dup, mis;
        for(int i=0; i<n; i++){
            if(vis[arr[i]-1]==1) dup = arr[i];
            
            vis[arr[i]-1] = 1;
        }
        
        for(int i=0; i<n; i++)
            if(vis[i]==0)   mis = i+1;
        
        return  {dup, mis};
    }
};