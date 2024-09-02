class Solution {
public:
    int chalkReplacer(vector<int>& a, int k) {
        int n = a.size();
        // long long sm = accumulate(a.begin(), a.end(), 0);
        // long long sm = 0;
        // for(int i=0; i<n; i++)
        //     sm  = (long long)sm + (long long)a[i];
        k %= accumulate(begin(a), end(a), 0l);
        // k %= sm;
        for(int i=0; i<n; ++i){
            if(k==a[i])
                return i+1;
            k -= a[i];
            if(k<0)
                return i;
        }
        return 0;
    }
};