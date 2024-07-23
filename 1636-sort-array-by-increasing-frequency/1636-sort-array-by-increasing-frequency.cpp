class Solution {
public:
    vector<int> frequencySort(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int, int> hash;
        for(int i=0; i<n; i++){
            hash[arr[i]]++;
        }
        
        sort(arr.begin(), arr.end(), [&](int a, int b){
           if(hash[a]==hash[b])     return a>b;
            return hash[a]<hash[b];
        });
        return arr;
    }
};