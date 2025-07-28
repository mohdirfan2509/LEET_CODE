class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        sort(nums.begin(), nums.end());
        int n= nums.size();
        int l=1, h= *max_element(nums.begin(), nums.end());
        int ans=h;
        while(l<=h){
            int m=(l+h)/2;
            if(check(nums, m, threshold)){
                ans=m;
                h=m-1;
            }
            else l=m+1;
        }
        return ans;
        
    }

    bool check(vector<int>& nums, int divisor, int threshold){
        int res=0;

        for(int i=0;i<nums.size();i++){
            res=res+(nums[i]+divisor-1)/divisor;
        }
        return res<= threshold;
    }
}; 