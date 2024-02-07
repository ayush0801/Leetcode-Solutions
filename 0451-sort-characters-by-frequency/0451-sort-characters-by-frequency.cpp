class Solution {
public:
    string frequencySort(string s) {
        string ans;
        priority_queue<pair<int, int>> pq;
        
        map<char, int> hash;
        
        for(auto ch : s){
            hash[ch]++;
        }
        
        for(auto x : hash){
            pq.push(make_pair(x.second, x.first));
        }
        
        while(!pq.empty()){
            for(int i=0; i<pq.top().first; i++){
                ans += pq.top().second;
            }
            pq.pop();
        }
        return ans;
    }
};