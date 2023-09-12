class Solution {
public:
    int minDeletions(string s) {
        vector<int> v(26,0);
        for(int i=0;i<s.size();i++)
            v[s[i]-'a']++;

        sort(v.rbegin(),v.rend());
        int ans = 0;
        for(int i=1;i<26;i++){               
            if(v[i-1] <= v[i] ){           
                int diff = v[i] - max(0,v[i-1]-1);
                ans += diff;
                v[i] = v[i]-diff;
            }
        }

        return ans;
    }
};