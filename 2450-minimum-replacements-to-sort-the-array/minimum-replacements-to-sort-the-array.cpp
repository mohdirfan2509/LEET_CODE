class Solution {
public:
    long long minimumReplacement(vector<int>& nums) {
        int n= nums.size();
        long long operations=0;
        for(int i=n-2;i>=0;i--){
            if(nums[i]>nums[i+1]){
                int limit=nums[i+1];
                long long parts= ceil((nums[i]+limit-1)/limit);
                operations=operations+parts-1;
                nums[i]=nums[i]/parts;
            }
        }
        return operations;
    }
};