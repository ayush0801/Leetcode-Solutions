class Solution {
public:
    // void toLower(string s){
    //     for(auto x : s){
    //         x = to_lower(x);
    //     }
    // }
    bool isAlphaNumeric(char c){
        if(int(c)>64 and int(c)<91 || (int(c)>96 and int(c)<123))
            return true;
        return false;
    }
    bool isPalindrome(string str) {
        string s="";
        for(auto x : str){
            if(!isalnum(x)){
                continue;
            }
            else{
                x = tolower(x);
                s += x;
            }
            
            // cout<<x;
        }
        int n = s.size();
        int i = 0;
        int j = n-1;

        // cout<<endl;
        while(i<=j){
            // cout<<s[i]<<" "<<s[j]<<endl;
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
        
        
        // while(i<=j){
        //     if(!isalnum(s[i])){
        //         cout<<"s[i]: "<<s[i]<<endl;
        //         i++;
        //     }
        //     else if(!isalnum(s[j])){
        //         cout<<"s[j]: "<<s[j]<<endl;
        //         j--;
        //     }
        //     if(s[i]!=s[j]){
        //         return false;
        //     }
        //     i++;
        //     j--;
        //     cout<<s[i]<<" "<<s[j]<<endl;
        // }
        // return true;
    }
};