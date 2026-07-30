class Solution {
public:
    int minimumPushes(string word) {
        int n=word.size();
        int rem=n%8;
        int val=n/8;
        return 8*(val*(val+1)/2)+rem*(val+1);
    }
};