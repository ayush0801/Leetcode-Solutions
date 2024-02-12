class Solution {
public:
    int majorityElement(vector<int>& arr) {
    unordered_map<int,int> hash;
        for(auto x : arr){
            hash[x]++;
            if(hash[x] > arr.size()/2){
                return x;
            }
        }
        return 0;
    }
};