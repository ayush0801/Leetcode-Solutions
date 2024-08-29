class Solution {
public:
    bool isPalindrome(string s) {
        int i=0;
        int j = s.size()-1;
        while(i<=j){
            if(isalnum(s[i]) and isalnum(s[j])){
                if(tolower(s[i])==tolower(s[j])){
                    i++;
                    j--;
                }
                else    return false;
            }
            else if(!isalnum(s[i])) i++;
            else if(!isalnum(s[j])) j--;
        }
        return true;
    }
};