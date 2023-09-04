class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0;
        int j = 0;
        int ans = 0;
        // unordered_map<char, int> hash;
        int hash[256] = {0};
        while(j<s.size()){
            hash[s[j]]++;
            
            while(hash[s[j]]>1){
                hash[s[i]]--;
                i++;
            }
            
            ans = max(ans, j-i+1);
            j++;
        }
        return ans;
    }
};