class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int maxi=-1;
        
        
        for (int i = 0; i < nums.size(); i++){
            for(int j=0;j<nums.size(); j++){

                if(nums[i]== -(nums[j]) && nums[i]> maxi){

                    maxi= max(maxi, nums[i]);

                   
                }
               
                }

            }
        return maxi;    
    }

    
    
};