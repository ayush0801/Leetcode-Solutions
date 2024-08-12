class KthLargest {
public:
    int temp = 0;
    priority_queue<int,vector<int>,greater<int>> pq;
    KthLargest(int k, vector<int>& nums) {
        temp = k;
        for(auto x: nums)   add(x);
    }
    
    int add(int val) {
        if(pq.size()<temp) pq.push(val);
        else{
            if(pq.top()<val){
                pq.pop();
                pq.push(val);
            }
        }
        return pq.top();
    }
    
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */