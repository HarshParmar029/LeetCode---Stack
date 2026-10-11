class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long ans = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int smallest = nums[i];
            int largest = nums[i];

            for (int j = i; j < n; j++) {
                smallest = min(smallest, nums[j]);
                largest = max(largest, nums[j]);

                ans += (long long)largest - smallest;
            }
        }

        return ans;
    }
};
