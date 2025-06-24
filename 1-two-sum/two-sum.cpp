class Solution {
public:
   vector<int> twoSum(vector<int>& nums, int target) {
    int n= nums.size();
    unordered_map<int,int> umap;
    for(int i=0;i<n;i++){
        int complement=target-nums[i];
        if(umap.find(complement)!= umap.end()){

            return {umap[complement],i};
        }
        umap[nums[i]]=i;
    }
    return { };

    
}
    
};