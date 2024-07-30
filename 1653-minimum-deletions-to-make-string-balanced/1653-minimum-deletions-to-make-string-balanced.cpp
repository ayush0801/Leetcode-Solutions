class Solution {
public:
    int minimumDeletions(string s) {
        int n = s.length();
        vector<int> count_a(n, 0);
        int a_count = 0;

        // First pass: compute count_a which stores the number of
        // 'a' characters to the right of the current position
        for (int i = n - 1; i >= 0; i--) {
            count_a[i] = a_count;
            if (s[i] == 'a') a_count++;
        }

        int min_deletions = n;
        int b_count = 0;
        // Second pass: compute minimum deletions on the fly
        for (int i = 0; i < n; i++) {
            min_deletions = min(count_a[i] + b_count, min_deletions);
            if (s[i] == 'b') b_count++;
        }

        return min_deletions;
    }
};