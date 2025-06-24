class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int n= nums.size();
        int count=0;
        unordered_map<int,int> umap;
        for(int i: nums){
            count=count+umap[i-k];
            count=count+umap[i+k];
            umap[i]++;
        }
        return count;
    }
};