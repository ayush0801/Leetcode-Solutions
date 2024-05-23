func rob(arr []int) int {
    n := len(arr);
    dp := make([]int, n)
    // dp := [n]int{0}
    dp[0] = arr[0]
    if n==1 {
        return arr[0]
    }
    if n==2 {
        return max(arr[0], arr[1]);
    }
    dp[1] = max(dp[0], arr[1])
    
    for i := 2; i<n; i++ {
        dp[i] = max(arr[i] + dp[i-2], dp[i-1]);
    }
    
    return dp[n-1];
}