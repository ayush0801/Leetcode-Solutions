class Solution {
public:
    int evalRPN(vector<string>& tokens) {
       stack<int> s;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/"){
                long long int a = s.top();
                s.pop();
                long long int b = s.top();
                s.pop();
                int res;
                if(tokens[i] == "+"){
                    long long int res = a+b;
                    s.push(res);
                }
                else if(tokens[i] == "-"){
                    long long int res = b-a;
                    s.push(res);
                }
                else if(tokens[i] == "*"){
                    long long int res = a*b;
                    s.push(res);
                }
                else if(tokens[i] == "/"){
                    long long int res = b/a;
                    s.push(res);
                }
            }
            else
                s.push(stoi(tokens[i]));
        }
        return s.top();
    }
};