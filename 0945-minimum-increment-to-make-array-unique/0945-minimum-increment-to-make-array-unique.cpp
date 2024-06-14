class Solution {
public:
    int minIncrementForUnique(vector<int>& arr) {
        int n = arr.size();
        int ans = 0;
        sort(arr.begin(), arr.end());
        for(int i=1; i<n; i++){
            if(arr[i]<=arr[i-1]){
                ans += arr[i-1] + 1 - arr[i];
                arr[i] = arr[i-1] + 1;
            }
        }
        return ans;
    }
};