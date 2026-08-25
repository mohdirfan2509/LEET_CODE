class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_set<int> us;
        for(int i:nums){
            us.insert(i);
        }
        
        int v=1;
        while(us.count(v*k)){
            v++;
        }
        return v*k;
        
    }
};