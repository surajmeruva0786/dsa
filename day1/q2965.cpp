class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int, int> freq;
        long long actualSum = 0;
        int repeated = -1;

        int n = grid.size();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int num = grid[i][j];
                actualSum += num;
                freq[num]++;
                if (freq[num] == 2) {
                    repeated = num;
                }
            }
        }

        long long expectedSum = (long long)n * n * (n * n + 1) / 2;
        int missing = expectedSum - (actualSum - repeated);

        return {repeated, missing};
    }
};
