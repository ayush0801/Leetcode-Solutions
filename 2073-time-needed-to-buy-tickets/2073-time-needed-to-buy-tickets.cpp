class Solution {
public:
    int timeRequiredToBuy(vector<int>& arr, int k) {
        int n = arr.size();
        int ans = 0;
        for(int i=0; i<n; i++){
            if(i>k && arr[k]<=arr[i]){
                ans += arr[k]-1;
            }
            else ans += min(arr[i], arr[k]);
            cout<<ans<<" ";
        }
        return ans;
    }
};