class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& arr) {
        double n = arr.size();
        double time = 0;
        // vector<vector<int>> pre()
        for(int i=0; i<n; i++) {
            if(i==0) {
                arr[i][1] += arr[i][0];
            }
            else{
                arr[i][1] += max(arr[i][0],arr[i-1][1]);
            }
            time += arr[i][1] - arr[i][0];
        }
        double ans = time/n;
        // return double(time/n);
        return ans;
    }
};