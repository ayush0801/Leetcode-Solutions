class Solution {
public:
    bool halvesAreAlike(string s) {
        set<char> st;
        st.insert('a');
        st.insert('e');
        st.insert('i');
        st.insert('o');
        st.insert('u');
        st.insert('A');
        st.insert('E');
        st.insert('I');
        st.insert('O');
        st.insert('U');
        int count=0;
        int i=0;
        int n = s.size();
        while(i<n){
            if(st.find(s[i])!=st.end()){
                if(i<n/2)    count++;
                else count--;
            }
            i++;
        }
        cout<<count<<endl;
        return count==0;
    }
};