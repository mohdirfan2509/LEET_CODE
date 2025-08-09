class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int p1=0, p2=n-1;
        int res=INT_MIN;
        while(p1<p2){
            int sum=nums[p1]+nums[p2];
            res=max(res,sum);
            p1++;
            p2--;        
        }
        return res;
    }
};