class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.size();
        unordered_map<char, char> um;
        for (int i = 0; i < n; i++) {
            if (um.find(s[i]) != um.end() && um[s[i]] != t[i]) {
                return false;
            } else {
                um.insert({s[i], t[i]});
            }
        }
        unordered_set<char> u1;
        unordered_set<char> u2;
        for (char x : s) {
            u1.insert(x);
        }
        for (char y : t) {
            u2.insert(y);
        }

        return true && u1.size() == u2.size();
    }
};