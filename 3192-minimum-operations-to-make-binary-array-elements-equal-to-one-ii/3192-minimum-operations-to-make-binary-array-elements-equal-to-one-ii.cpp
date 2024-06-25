class Solution {
public:
    int minOperations(std::vector<int>& arr) {
        int flips = 0;
        int n = arr.size();

        if (arr[0] == 0) {
            flips++;
        }

        for (int i = 1; i < n; ++i) {
            if (arr[i] != arr[i - 1]) {
                flips++;
            }
        }

        return flips;
    }
};