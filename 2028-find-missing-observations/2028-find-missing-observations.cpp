class Solution {
public:
    vector<int> missingRolls(vector<int>& arr, int avg, int n) {
        int len = arr.size(); //4
        int newlen = len + n; //6
        int sm = accumulate(arr.begin(), arr.end(),0); //12
        int newsm = avg*newlen; //24
        int diff = newsm - sm; //12
        // cout<<diff;
        vector<int> ans;
        
        if(diff>6*n || diff<n)    return{};
        
        int rem = diff%n;
        int div = diff/n;

        for(int i=0; i<n; i++){
            ans.push_back(div);
        }
        for(int i=0; i<n; i++){
            if(rem==0)  break;
            ans[i]++;
            rem--;
            
        }
        return ans;
    }
};