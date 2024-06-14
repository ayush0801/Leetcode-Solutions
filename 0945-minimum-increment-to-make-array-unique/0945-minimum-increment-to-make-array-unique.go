func minIncrementForUnique(arr []int) int {
    ans := 0;
    sort.Ints(arr);
    for i := 1; i<len(arr); i++ {
        if(arr[i]<=arr[i-1]){
            ans += arr[i-1] + 1 - arr[i];
            arr[i] = arr[i-1]+1;
        }
    }
    return ans;
}