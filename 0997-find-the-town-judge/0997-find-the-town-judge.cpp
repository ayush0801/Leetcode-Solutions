class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<vector<int>> who(n), whom(n);
        
        for(auto x : trust){
            who[x[0]-1].push_back(x[1]-1);
            whom[x[1]-1].push_back(x[0]-1);
        }
        
        for(int i=0; i<n; i++){
            if(who[i].size()==0 && whom[i].size()==n-1) return i+1;
        }
        return -1;
    }
    // int findJudge(int N, vector<vector<int>>& trust) {
    //     vector<int> count(N + 1, 0);
    //     for (auto& t : trust)
    //         count[t[0]]--, count[t[1]]++;
    //     for (int i = 1; i <= N; ++i) {
    //         if (count[i] == N - 1) return i;
    //     }
    //     return -1;
    // }
};