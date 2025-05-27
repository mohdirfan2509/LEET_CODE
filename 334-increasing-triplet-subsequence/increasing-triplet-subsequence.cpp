class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n= nums.size();
        int smallest = INT_MAX;
        int smallest2 = INT_MAX;
        for(int i=0;i<n;i++){
            if(nums[i]<=smallest){
                smallest= nums[i];
            }
            else if (nums[i]<=smallest2){
                smallest2= nums[i];

            }
            else{
                return true;
            }
        }
        return false;
        
        
    }
};