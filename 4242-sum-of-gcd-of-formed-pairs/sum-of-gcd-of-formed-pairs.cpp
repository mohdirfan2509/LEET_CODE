class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        long long n = nums.size();
        vector<long long> maxArray(n);
        long long currMax = INT_MIN;
        for (long long i = 0; i < n; i++) {
            currMax = max(currMax, (long long)nums[i]);
            maxArray[i] = currMax;
        }
        vector<long long> prefixGcd(n);
        for(int i=0;i<n;i++){
            prefixGcd[i]=gcd(nums[i],maxArray[i]);
        }
        sort(prefixGcd.begin(), prefixGcd.end());
        long long ans = 0;
        for (long long i = 0; i < n / 2; i++) {
            ans+=gcd(prefixGcd[i],prefixGcd[n-i-1]);
        }
        return ans;

    }
};