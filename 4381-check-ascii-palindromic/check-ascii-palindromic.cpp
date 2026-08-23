class Solution {
public:
    bool isPalindromic(string s) {
        string binary;
        for (char a : s) {
            binary += bitset<8>((int)a).to_string();
        }
        string revBinary = binary;
        reverse(binary.begin(), binary.end());
        return binary==revBinary;
    }
};