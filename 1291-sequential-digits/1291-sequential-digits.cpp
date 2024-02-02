class Solution {
public:
    vector<int> sequentialDigits(int lo, int hi) {
        
        vector<int> ans;
        int sum = 0;
        for(int i=1; i<=9; i++)
        {
            sum=0;
            for(int j=i; j<=9; j++)
            {
               sum=sum*10+j;   
                if(sum >= lo && sum <= hi)
                {
                    ans.push_back(sum);
                }
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};