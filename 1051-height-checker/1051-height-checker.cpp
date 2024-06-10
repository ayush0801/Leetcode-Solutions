class Solution {
public:
    int heightChecker(vector<int>& arr) {
        int ans = 0;
        vector<int> temp = arr;
        sort(temp.begin(), temp.end());
        for(int i=0; i<arr.size(); i++){
            if(arr[i]!=temp[i]) ans++;
        }
        return ans;
    }
};