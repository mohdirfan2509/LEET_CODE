class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n=nums.size();
        int minElement=INT_MAX;
        int maxElement=INT_MIN;
        for(int i=0;i<n;i++){
            minElement=min(minElement,nums[i]);
            maxElement=max(maxElement,nums[i]);
        }
        return gcd(maxElement,minElement);
    }
};