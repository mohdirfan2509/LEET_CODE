class Solution {
public:
    int minOperations(string s) {
        int n = s.size();
        int ans = INT_MAX;

        int p1 = 0;
        int p2 = n - 1;
        int res = 0;
        while (p1 < p2) {
            int diff = abs(s[p1] - s[p2]);
            res += min(diff, 26 - diff);
            p1++;
            p2--;
        }
        ans = min(ans, res);

        string temp = s;
        for (int i = 1; i <= n - 1; i++) {
            char x = temp[0];
            temp.erase(0, 1);
            temp.push_back(x);
            p1 = 0;
            p2 = n - 1;
            res = 0;
            while (p1 < p2) {
                int diff = abs(temp[p1] - temp[p2]);
                res += min(diff, 26 - diff);
                p1++;
                p2--;
            }
            ans = min(ans, res + i);
        }
        return ans;
    }
};