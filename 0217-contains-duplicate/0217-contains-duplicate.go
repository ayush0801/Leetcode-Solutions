func containsDuplicate(arr []int) bool {
    n := len(arr)
    
    hash := make(map[int]bool)
    
    for i := 0; i<n; i++ {
        if hash[arr[i]]==true {
            return true
        }
        hash[arr[i]] = true;
    }
    return false
}