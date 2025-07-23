class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n= nums.size();
        int l=0, h= n-1;
        while(l<=h){
            int m= (l+h)/2;
            if(m==0 || m== n-1) return nums[m];
            if(nums[m] != nums[m-1] && nums[m] != nums[m+1]) return nums[m];
            if(nums[m-1]==nums[m]) m= m-1;

            if(m % 2==0) l= m+2;
            else h= m-1;
        }
        return 0;
    }
};