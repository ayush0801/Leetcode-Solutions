class Solution {
public:
    string longestCommonPrefix(vector<string>& arr) {
        int n = arr.size();
        int len = INT_MAX;
        for(auto x : arr){
            if(len>x.size())    len = x.size();
            // len = min(len, x.size());
        }
        string ans = "";
        
        for(int j=0; j<len; j++){
            char temp = arr[0][j];
            for(int i=0; i<n; i++){
                if(arr[i][j]!=temp)   return ans;
            }
            ans += temp;
        }
        return ans;
    }
};