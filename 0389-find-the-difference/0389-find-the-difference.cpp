class Solution {
public:
    char findTheDifference(string s, string t) {
        int n = s.size();
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        // for(int i=0; i<n; i++){
        //     if(s[i]!=t[i]){
        //         cout<<t[i];
        //         return t[i];
        //     }
        // }
        // return t[n];
        unordered_map<char, int> hash;
        char ans;
        for(int i=0; i<n; i++){
            hash[s[i]]++;
        }
        for(int i=0; i<n+1; i++){
            if(hash[t[i]])
                hash[t[i]]--;
            else
                ans = t[i];
        }
        return ans;
    }
};