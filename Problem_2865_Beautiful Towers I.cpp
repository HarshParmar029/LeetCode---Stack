
class Solution {
public:
    long long maximumSumOfHeights(vector<int>& heights) {
        int n = heights.size();
        long long ans = 0;

        for (int peak = 0; peak < n; peak++) {
            long long sum = heights[peak];
            int h = heights[peak];

            // Calculate heights on the left side
            int prev = h;
            for (int i = peak - 1; i >= 0; i--) {
                prev = min(prev, heights[i]);
                sum += prev;
            }

            // Calculate heights on the right side
            prev = h;
            for (int i = peak + 1; i < n; i++) {
                prev = min(prev, heights[i]);
                sum += prev;
            }

            ans = max(ans, sum);
        }

        return ans;
    }
};
