func containsDuplicate(arr []int) bool {
    n := len(arr)
    
    hash := make(map[int]int)
    
    for i := 0; i<n; i++ {
        if hash[arr[i]]>0 {
            return true
        }
        hash[arr[i]]++;
    }
    return false
}