class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int p1 = 0;
        int p2 = n - 1;
        while (p1 < p2) {

            if (nums[p1] == 0) {
                int i = p1;
                while (i < p2) {
                    swap(nums[i], nums[i + 1]);
                    i++;
                }
                p2--;
            }
            if(nums[p1]!=0){
                p1++;
            }
        }
    }
};