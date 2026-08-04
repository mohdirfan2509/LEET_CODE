class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        sort(nums.begin(), nums.end());
        int val = nums[0];
        for (int i = 0; i < n; i++) {
            if (nums[i] == val) {
                val++;
            } else {
                while (val != nums[i]) {
                    ans.push_back(val);
                    val++;
                }
                val++;
            }
        }
        return ans;
    }
};