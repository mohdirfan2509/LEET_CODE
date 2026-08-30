class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n = nums.size();
        if (n == 1)
            return 1;

        unordered_map<int, int> um;
        for (int x : nums) {
            um[x]++;
        }

        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (um.count(nums[i])) {
                um[nums[i]]--;
                if (um[nums[i]] == 0) {
                    um.erase(nums[i]);
                    ans++;
                } else if (i < n - 1 && um[nums[i]] != 0 &&
                           nums[i] != nums[i + 1]) {
                    um.erase(nums[i]);
                }
            }
        }
        return ans;
    }
};