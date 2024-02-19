class Solution {
public:
    bool isPowerOfTwo(int n) {
        int rem = 0;
        if(n==1 || n==2)
            return true;
        else if(n%2 != 0 || n<1)
            return false;
        else if(n>2 && n%2 == 0){
            while(n!=0){
                n /= 2;
                rem = n%2;
                if(n%2 != 0){
                    return false;
                    break;
                }
                if(n==2 && rem == 0)
                    return true;
            }
            
        }
        return 0;
    }
};