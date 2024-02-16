class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        int n = arr.size();
        unordered_map<int, int> hash;
        // if(n==1)
        for(auto x : arr){
            hash[x]++;
        }
        vector<int> freq;
        for(auto x : hash){
            freq.push_back(x.second);
        }
        sort(freq.begin(), freq.end());
        int ans = 0;
        
        for(int i=0; i<freq.size(); i++){
            if(freq[i]<=k){
                // freq[i] = 0;
                k -= freq[i];
                ans++;
            }
            else{
                int temp2 = freq.size()-i;
                int temp = max(0, temp2);
                return temp;
            }
        }
        return freq.size()-ans;
    }
};