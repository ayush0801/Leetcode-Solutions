class Solution {
public:
    int solve(vector<int> pos, int mid){
        int ans = 1;
        int cur = pos[0];
        for(int i=1; i<pos.size(); i++){
            if(pos[i] - cur >= mid){
                ans++;
                cur = pos[i];
            }
        }
        return ans;
    }
    int maxDistance(vector<int>& pos, int m) {
        sort(pos.begin(), pos.end());
        int l = 0;
        int r = pos.back() - pos.front();
        while(l<r){
            int mid = r - (r-l)/2;
            if(solve(pos, mid)>=m)
                l = mid;
            else
                r = mid - 1;
        }
        return l;
    }
};