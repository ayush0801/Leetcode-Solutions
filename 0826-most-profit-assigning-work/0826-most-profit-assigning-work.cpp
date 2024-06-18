class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int ans = 0;
        vector<vector<int>> arr;
        for(int i=0; i<difficulty.size(); i++){
            arr.push_back({difficulty[i], profit[i]});
        }
        
        sort(arr.begin(), arr.end());
        sort(worker.begin(), worker.end());
        
        int i=0, j=0;
        int mx = 0;
        
        while(i<arr.size() and j<worker.size()){
            if(arr[i][0]<=worker[j]){
                if(i==arr.size()-1){
                    while(j<worker.size()){
                        mx = max(mx, arr[i][1]);
                        ans += mx;
                        j++;
                    }
                }
                else{
                    mx = max(mx, arr[i][1]);
                    i++;
                }
            }
            else{
                if(i==0){
                    j++;
                }
                else{
                    mx = max(mx, arr[i-1][1]);
                    ans += mx;
                    j++;
                }
            }
        }
        return ans;
    }
};