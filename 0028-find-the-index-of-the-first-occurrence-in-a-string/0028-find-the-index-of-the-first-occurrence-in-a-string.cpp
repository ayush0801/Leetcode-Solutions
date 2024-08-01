class Solution {
public:
    int strStr(string a, string b) {
        int n = a.size();
        int m = b.size();
        int i = 0, j = 0;
        
        while(i<n && j<m){
            if(a[i]==b[j]){
                if(j==m-1)  return i-m+1;
                else{
                    i++;
                    j++;
                }
            }
            else{
                if(j==0){
                    i++;
                }
                else{
                    i = i-j+1;
                    j=0;
                }
            }
        }
        return -1;
    }
};