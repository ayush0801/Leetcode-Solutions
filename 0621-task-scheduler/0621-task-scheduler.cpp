class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> mp(26,0);
        for(auto i : tasks){
            mp[i-'A']++;
        }
        
        sort(mp.begin(),mp.end());
        
        
        int maxFreq = mp[25]-1;
        int idleSlot = maxFreq*n;
        
        for(int i=24; i>=0; i--){
            idleSlot -= min(mp[i], maxFreq);
        }
        
        if(idleSlot>0)  return idleSlot + tasks.size();
        
        return tasks.size();
    }
};