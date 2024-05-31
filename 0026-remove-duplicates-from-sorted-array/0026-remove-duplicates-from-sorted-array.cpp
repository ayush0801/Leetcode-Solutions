class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int n = arr.size();
        int i = 0;
        int j = 0;
        
        while(i<n && j<n){
            if(arr[i]==arr[j])    j++;
            else{
                i++;
                swap(arr[i], arr[j]);
                j++;
            }
        }
        return i+1;
    }
};