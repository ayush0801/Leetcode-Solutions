class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ans = 0;
        for(auto x : details){
            string temp = x.substr(11,2);
            int age = stoi(temp);
            if(age>60)  ans++;
        }
        return ans;
    }
};