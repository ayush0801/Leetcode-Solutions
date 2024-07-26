func isSubsequence(s string, t string) bool {
    i := 0;
    j := 0;
    if(len(s))==0 {
        return true;
    }
    for i<len(s) && j<len(t) {
        if i==len(s)-1 && s[i]==t[j] {
            return true;
        }
        if s[i] == t[j] {
            i++;
            j++;
        } else{
            j++;
        }
    }
    return false;
}