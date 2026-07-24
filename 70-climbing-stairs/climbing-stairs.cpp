class Solution {
public:
    int climbStairs(int n) {
        vector<int> dp(n + 1, 0);
        return solve(n,dp);
         
    }

    int solve(int n, vector<int>& dp) {
        if (n == 1)
            return 1;
        if (n == 2)
            return 2;

        if (dp[n - 1] == 0 && dp[n - 2] == 0) {
            dp[n - 1] = solve(n - 1,dp);
            dp[n - 2] = solve(n - 2,dp);
            return dp[n - 1] + dp[n - 2];
        } else if (dp[n - 1] == 0) {
            dp[n - 1] = solve(n - 1,dp);
            return dp[n - 1] + dp[n - 2];
        } else if (dp[n - 2] == 0) {
            dp[n - 2] = solve(n - 2,dp);
            return dp[n - 1] + dp[n - 2];
        } else {
            return dp[n - 1] + dp[n - 2];
        }
    }
};