class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> prefixMax(n);
        vector<int> suffixMax(n);

        prefixMax[0] = nums[0];
        for (int i = 1; i < n; i++) {
            prefixMax[i] = max(prefixMax[i - 1], nums[i]);
        }
        suffixMax[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            suffixMax[i] = min(suffixMax[i + 1], nums[i]);
        }

        int ans = INT_MAX;
        bool flag = true;
        for (int i = 0; i < n; i++) {
            if (prefixMax[i] - suffixMax[i] <= k) {
                flag = false;
                ans = min(ans, i);
            }
        }
        if (flag) {
            return -1;
        } else {
            return ans;
        }
    }
};