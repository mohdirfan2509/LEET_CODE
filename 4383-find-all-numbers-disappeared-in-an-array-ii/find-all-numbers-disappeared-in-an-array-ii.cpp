class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower,
                                               int upper) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;

        if (nums[0] > lower) {
            ans.push_back({lower, min(upper, nums[0] - 1)});
        }

        for (int i = 0; i < n - 1; i++) {
            if (abs(nums[i] - nums[i + 1]) > 1) {
                int left = max(lower, nums[i] + 1);
                int right = min(upper, nums[i + 1] - 1);
                if (left <= right) {
                    ans.push_back({left, right});
                }
            }
        }

        if (nums[n - 1] < upper) {

            ans.push_back({max(lower, nums[n - 1] + 1), upper});
        }
        return ans;
    }
};