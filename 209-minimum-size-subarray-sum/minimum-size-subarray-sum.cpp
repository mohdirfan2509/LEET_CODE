class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int ans=INT_MAX;
        int p1=0,p2=-1;
        int flag=0;
        while(p2<n){
            if(sum>=target){
                flag=1;
                ans=min(ans,p2-p1+1);
                sum=sum-nums[p1];
                p1++;
            } 
            else{
              
                p2++;
                if(p2==n) break;
                sum=sum+nums[p2];
                
            }
        }
        return (flag) ? ans: 0;
        
    }
};