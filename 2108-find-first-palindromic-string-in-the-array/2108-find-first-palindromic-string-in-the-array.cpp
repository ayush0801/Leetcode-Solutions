class Solution {
public:
    bool checkpalindrome(string& s){
        string temp = s;
        reverse(temp.begin(), temp.end());
        if(temp!=s) return false;
        return true;
        
    }
    string firstPalindrome(vector<string>& words) {
        for(int i=0; i<words.size(); i++){
            if(checkpalindrome(words[i]))    return words[i];
        }
        return "";
    }
};