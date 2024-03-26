class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> hash;
        
        // for(auto x: nums){
        //     if(x>0) hash[x]++;
        // }
        
        priority_queue <int, vector<int>, greater<int> > pq;
        for(auto x: nums){
            hash[x]++;
            if(hash[x]==1)
                pq.push(x);
        }
        
        while(!pq.empty() && pq.top()<=0){
            pq.pop();
        }
        
        if(pq.empty())    return 1;
        
        if(!pq.empty() && pq.top()>1)  return 1;
        
        int temp = pq.top();
        pq.pop();
        while(!pq.empty() && temp+1==pq.top()){
            temp = pq.top();
            pq.pop();
        }
        return temp+1;
    }
};