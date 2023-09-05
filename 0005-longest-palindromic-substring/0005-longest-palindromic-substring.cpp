class Solution {
public:
    string longestPalindrome(string s) {
        int n =s.size();
        int l,h;
        int start = 0, end = 1;
        for(int i=0; i<n; i++){
            l = i-1;
            h = i;
            while(l>=0 and h<n and s[l]==s[h]){
                if(h-l+1>end){
                    start = l;
                    end  = h-l+1;
                }
                l--;
                h++;
            }

            l = i-1;
            h = i+1;
            while(l>=0 and h<n and s[l]==s[h]){
                if(h-l+1>end){
                    start = l;
                    end  = h-l+1;
                }
                l--;
                h++;
            }
        }
        string sub = s.substr(start, end);
        return sub;
    }
};