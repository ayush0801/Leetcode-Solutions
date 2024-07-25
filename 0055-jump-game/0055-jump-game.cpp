class Solution {
public:
    bool canJump(vector<int>& arr) {
        int mn = 0;
        int n = arr.size();
        for(int i=n-2; i>=0; i--){
            mn++;
            if(arr[i]>=mn)  mn = 0;
        }
        return mn==0;
    }
};



// _ 2 3 1 1 4
// _ _ _ _ _ _
// 0 2 5 

// dp[i-2] + 1 + arr[i], 