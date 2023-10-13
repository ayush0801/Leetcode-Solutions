class Solution {
public:
    int minCostClimbingStairs(vector<int>& a) {
        int n = a.size();
        int i = 2;
        while(i<n){
            a[i] += min(a[i-1], a[i-2]);
            i++;
        }
        return min(a[n-1], a[n-2]);
    }
};