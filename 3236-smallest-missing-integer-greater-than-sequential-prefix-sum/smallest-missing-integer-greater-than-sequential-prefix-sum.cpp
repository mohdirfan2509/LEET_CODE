class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> us;
        for (int x : nums) {
            us.insert(x);
        }

        int sum = nums[0];

        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1] + 1) {
                sum += nums[i];
            } else {
                break;
            }
        }
        while (us.find(sum) != us.end()) {
            sum++;
        }
        return sum;
    }
};