class Solution {
public:
    bool winnerOfGame(string colors) {
        int n = colors.size();
        if(n<3) return false;
        
        int bob = 0;
        int alice = 0;
        for(int i=2; i<colors.size(); i++){
            if(colors[i]==colors[i-1] && colors[i]==colors[i-2]){
                if(colors[i]=='A')  alice++;
                else bob++;
            }
        }
        cout<<alice<<" "<<bob<<endl;
        return alice>=bob+1;
    }
};