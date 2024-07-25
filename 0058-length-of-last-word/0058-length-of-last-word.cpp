class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int i = n-1;
        int ans = 0;
        while(i>=0 && s[i]==' '){
            i--;
        }
        cout<<"intitial i: "<<i<<" ";
        if(i==0)    return 1;
        while(i>=0){
            if(s[i]!=' '){
                ans++;
                i--;
            }
            else{
                return ans;
            }
            // i--;
        }
        return ans;
    }
};