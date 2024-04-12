class Solution {
public:
    int trap(vector<int>& A) {
        int ans = 0, n = A.size(), l = 0, r = n-1, lmax = INT_MIN, rmax = INT_MIN;
        while(l < r){
            lmax = max(A[l], lmax);
            rmax = max(A[r], rmax);
            if(lmax<rmax)
                ans += lmax - A[l++];
            else
                ans += rmax - A[r--];
        }
        return ans;
    }
};