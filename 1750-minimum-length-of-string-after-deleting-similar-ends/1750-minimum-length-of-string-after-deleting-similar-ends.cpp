class Solution {
public:
    int minimumLength(string s) {
        int n = s.size();
        int hi=n-1;
        int lo = 0;
        int ans = n;
        
        if(n==1)    return 1;
        
        if(n==2){
            if(s[0]==s[1])  return 0;
            else return 2;
        }
        while(lo<=hi){
            while(s[lo]==s[hi] and s[lo]==s[lo+1] and lo<n-1){
                lo++;
                ans--;
            }
            while(s[lo]==s[hi] and s[hi]==s[hi-1] and hi>1){
                hi--;
                ans--;
            }
            if(ans==1)  return ans;
            if(s[lo]==s[hi]){
                ans -= 2;
                hi--;
                lo++;
            }
            else{
                if(ans==1)  return 1;
                return ans;
            }
            
        }
        return max(0, ans);
    }
};