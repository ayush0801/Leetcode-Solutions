class Solution {
public:
    int maxArea(vector<int>& arr) {
        int n = arr.size();
        int i = 0;
        int j = n-1;
        int ans = 0;
        
        while(i<=j){
            ans = max(ans, (j-i)*min(arr[i], arr[j]));
            if(arr[i]>arr[j]){
                j--;
            }
            else    i++;
        }
        return ans;
    }
};