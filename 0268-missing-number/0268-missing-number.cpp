class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        unordered_map<int, int> hash;
        int ans=n;
        // int ans1=0, ans2=0;
        for(int i=0; i<n; i++){
            hash[arr[i]]++;
        }
        for(int i=0; i<n; i++){
            if(!hash[i]){
                ans = i;
                break;
            }
        }
        return ans;
    }
};