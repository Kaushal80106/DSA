class Solution {
public:
    int maxTotalFruits(vector<vector<int>>& fruits, int startPos, int k) {
        int n = fruits.size();

        vector<int> prefixSum(n);
        vector<int> position(n);

        // Extract position and build prefix sum of fruit amounts
        for(int i = 0 ; i < n ; i++) {
            position[i] = fruits[i][0];
            prefixSum[i] = fruits[i][1] + (i > 0 ? prefixSum[i - 1] : 0);
        }

        int maxFruits = 0;

        // Case 1: Move left first, then right
        for(int d = 0; d <= k; d++) {
            int left = startPos - d;
            int right = startPos + max(0, k - 2 * d);

            auto itL = lower_bound(position.begin(), position.end(), left);
            auto itR = upper_bound(position.begin(), position.end(), right);

            if (itL < itR) {
                int l = itL - position.begin();
                int r = itR - position.begin() - 1;
                int total = prefixSum[r] - (l > 0 ? prefixSum[l - 1] : 0);
                maxFruits = max(maxFruits, total);
            }
        }

        // Case 2: Move right first, then left
        for(int d = 0; d <= k; d++) {
            int right = startPos + d;
            int left = startPos - max(0, k - 2 * d);

            auto itL = lower_bound(position.begin(), position.end(), left);
            auto itR = upper_bound(position.begin(), position.end(), right);

            if (itL < itR) {
                int l = itL - position.begin();
                int r = itR - position.begin() - 1;
                int total = prefixSum[r] - (l > 0 ? prefixSum[l - 1] : 0);
                maxFruits = max(maxFruits, total);
            }
        }

        return maxFruits;
    }
};
