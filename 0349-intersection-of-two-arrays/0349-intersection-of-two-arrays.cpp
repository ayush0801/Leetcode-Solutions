class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr;
        vector<int> ans;
        int n = nums1.size();
        int m = nums2.size();
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        for(int i=0, j=0; i<n && j<m;){
            if(nums1[i] == nums2[j]){
                arr.push_back(nums1[i]);
                i++;
                j++;
            }
            else{
                if(nums1[i]>nums2[j])
                    j++;
                else
                    i++;
            }
        }
        int q=0;
        for(int p=0; p<arr.size(); p++){
            if(arr[p] != arr[q]){
                q++;
                arr[q] = arr[p];
            }
        }
        int x = arr.size();
        for(int i = x-1; i>q; i--){
            arr.pop_back();
        }
        return arr;
    }
};