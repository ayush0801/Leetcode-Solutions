class Solution {
public:
//     string minWindow(string s, string t) {
//         unordered_map<char, int> hash;
        
//         for(auto x : t) hash[x]++;
        
//         int count = 0, start = 0, mn = INT_MAX, mn_start = 0;
        
//         for(int i=0; i<s.size(); i++){
//             if(hash[s[i]])  count++;
            
//             hash[s[i]]--;
            
//             if(count == t.size()){
//                 while(start<i && hash[s[start]]<0){
//                     hash[s[start]]++;
//                     start++;
//                 }
                
//                 if(mn > (i - start + 1)){
//                     mn_start = start;
//                     mn = i - start + 1;
//                 }
//             }
//         }
//         if(mn == INT_MAX)   return "";
        
//         return s.substr(mn_start, mn);
//     }
    string minWindow(string s, string t) {
    unordered_map<char, int> letters;
    for(auto c : t) letters[c]++; 

    int count = 0;
    int low = 0;
    int min_length = INT_MAX, min_start = 0;
    for(int high = 0; high<s.length(); high++) {
        if(letters[s[high]] > 0) count++;
        letters[s[high]]--;
        if(count == t.length()) {
            while(low < high && letters[s[low]] < 0){ 
                letters[s[low]]++;
                low++;
            }
            if(min_length > (high - low + 1)){
                min_start = low;
                min_length = high - low + 1;
            }
        }
    }
    if(min_length == INT_MAX) return "";
    return s.substr(min_start, min_length);
}
};