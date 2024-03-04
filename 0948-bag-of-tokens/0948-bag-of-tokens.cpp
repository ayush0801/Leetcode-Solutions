class Solution {
public:
    int bagOfTokensScore(vector<int>& arr, int power) {
        int n = arr.size();
        int i=0, j = n-1;
        int ans = 0, score = 0;
        sort(arr.begin(), arr.end());
        if(n==0)    return 0;
        if(arr[0]>power)    return 0;
        while(i<=j){
            if(power>=arr[i]){
                ans++;
                power -= arr[i];
                i++;
            }
            else{
                ans--;
                power += arr[j];
                j--;
            }
            score = max(score, ans);
        }
        return score;
    }
};