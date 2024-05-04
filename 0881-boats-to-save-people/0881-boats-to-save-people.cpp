class Solution {
public:
    int numRescueBoats(vector<int>& arr, int limit) {
        int n = arr.size();
        int ans = 0;
        int i=0, j=n-1;
        sort(arr.begin(), arr.end());
        
        while(i<=j){
            if(arr[i] + arr[j] <= limit){
                i++;
                j--;
                ans++;
            }
            else{
                j--;
                ans++;
            }

        }
        return ans;
    }
};