class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int start=0,end=0,sum=0;
        while(end<s.length()){
            sum+=abs(s[end]-t[end++]);
            if(sum>maxCost)
                sum-=abs(s[start]-t[start++]);
        }
        return end-start;        
//         int n = s.size();
//         int ans = 0;
//         vector<int> diff(n,0);
//         for(int i=0; i<n; i++)  diff[i] = int(abs(s[i] - t[i]));

//         int temp = 0;
//         int len = 0;
//         for(int i=0; i<n; i++){
//             if(temp + diff[i] <= mx){
//                 temp += diff[i];
//                 len++;
//                 ans = max(ans, len);
//             }
//             else{
//                 temp = 0;
//                 len = 0;
//                 if(diff[i]<=mx){
//                     temp = diff[i];
//                     len = 1;
//                 }
//             }
//         }
//         return ans;
    }
};