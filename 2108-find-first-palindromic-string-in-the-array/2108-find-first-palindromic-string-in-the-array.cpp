class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        int n = words.size();
        string ans;
        string res;
        for(int i=0; i<n; i++){
            ans = words[i];
            reverse(ans.begin(), ans.end());
            if(ans==words[i]){
                return ans;
                break;
            }
            else{
                ans = "";
            }
        }
        return ans;
    }
};