class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int n= nums.size();
        int max_sum=0;
        int min_sum=0;
        int ans=0;
        for(int i=0;i<n;i++){
            max_sum=max_sum+nums[i];
            min_sum= max(min_sum,nums[i]);
        }
        int l=min_sum, h=max_sum;
        while(l<=h){
            int m=(l+h)/2;
            if(check(nums, m , k )==true){
                ans=m;
                h=m-1;
            
            }
            else l=m+1;
        }
    
        return ans;
    }

    bool check(vector<int>& nums,int m, int k){
        int count=1;
        int s=0;
        for(int i=0;i<nums.size();i++){
            s=s+nums[i];
            if(s>m){
                count++;
                s=nums[i];
            }
        }
        return count<=k;
    }
};