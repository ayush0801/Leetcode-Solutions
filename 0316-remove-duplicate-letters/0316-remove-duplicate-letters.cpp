class Solution {
public:
    string removeDuplicateLetters(string s) {
        string ans = "";
        
        vector<char> freq(26, 0), vis(26,0);
        
        for(auto x : s) freq[x - 'a']++;
        
        stack<char> st;
        
        for(int i=0; i<s.size(); i++){
            freq[s[i] - 'a']--;
            
            if(vis[s[i] - 'a']==0){
                while(ans.size()>0 && ans.back()>s[i] && freq[ans.back() - 'a']){
                    vis[ans.back() - 'a'] = 0;
                    ans.pop_back();
                }
                
                ans += s[i];
                vis[s[i] - 'a'] = 1;
            }
        }
        return ans;
    }
};