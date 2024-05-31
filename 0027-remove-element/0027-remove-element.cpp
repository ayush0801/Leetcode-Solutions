class Solution {
public:
    int removeElement(vector<int>& arr, int val) {
        int n = arr.size();
        int i = 0;
        int j = n-1;
        
        while(i<=j){
            if(arr[i] == val){
                if(arr[j] != val){
                    swap(arr[i], arr[j]);
                    j--;
                }
                else    j--;
            }
            else    i++;
        }
        return i;
    }
};