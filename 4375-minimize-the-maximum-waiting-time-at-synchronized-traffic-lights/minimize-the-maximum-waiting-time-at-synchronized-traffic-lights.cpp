class Solution {
public:
    int minPenalty(int period, vector<int>& lights, vector<int>& arrivalTime) {
        int maxTime = 0;
        for (auto& it : lights)
            maxTime = max(maxTime, it);

        int ans = 0;
        for (auto& it : arrivalTime) {
            int r = it % period;
            if (r < maxTime)
                continue;
            else {
                ans = max(ans, period - r);
            }
        }
        return ans;
    }
};