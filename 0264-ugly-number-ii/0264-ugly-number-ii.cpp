class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> t(n);
        t[0] = 1;
        int p=0, q=0, r=0;
        for(int i=1; i<n; i++){
            t[i] = min(t[p]*2, min(t[q]*3, t[r]*5));
            if(t[i]==t[p]*2){
                p++;
                // cout<<"p = "<<p<<endl;
            }
            if(t[i]==t[q]*3){
                q++;
                // cout<<"q = "<<q<<endl;
            }
            if(t[i]==t[r]*5){
                r++;
                // cout<<"r = "<<r<<endl;
            }
        }
        // for(int i=0; i<n; i++){
        //     cout<<t[i]<<" ";
        // }
        return t[n-1];
    }
};