class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n= nums.size();
        long long answer=0;
        for(int left=0; left<n; left++){
            int maxVal=nums[left],minVal=nums[left];

            for(int right=left; right<n; right++){

                maxVal= max(maxVal,nums[right]);
                minVal= min(minVal,nums[right]);
                answer += maxVal- minVal;
             
            }
            
        }
        return answer;
        
        
    }
};