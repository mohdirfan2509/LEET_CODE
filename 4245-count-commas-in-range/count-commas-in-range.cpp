class Solution {
public:
    long long countCommas(long long n) {

        if (n >= 1000 && n <= 9999) {
            return n - 1000 + 1;

        } else if (n >= 10000 && n <= 99999) {
            return 9000 + (n - 10000 + 1);
        } else if (n >= 100000 && n <= 999999) {
            return 9000 + 90000 + (n - 100000 + 1);
        }
        return 0;
    }
};