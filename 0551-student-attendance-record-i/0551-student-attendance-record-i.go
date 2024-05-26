func checkRecord(s string) bool {
    n := len(s)
    abs := 0
    if n==1 {
        return true
    }
    if n==2{
        if s[0] == 'A' && s[1] == 'A' {
            return false
        } else {
            return true
        }
    }
    if s[0]=='A' || s[1]=='A' {
        abs++
    }
    for i := 2; i<n; i++ {
        if s[i] == 'A' {
            abs++
        }
        if s[i]=='L' && s[i-1]=='L' && s[i-2]=='L' {
            return false
        }
    }
    if abs > 1 {
        return false
    }
    return true
}