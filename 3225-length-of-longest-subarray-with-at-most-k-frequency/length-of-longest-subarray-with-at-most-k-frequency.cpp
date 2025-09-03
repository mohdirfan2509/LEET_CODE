class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int, int> umap;
        int n = nums.size();
        int p1 = 0, p2 = -1;
        int ans = 0;
        while (p2 < n-1) {
            p2++;
            umap[nums[p2]]++;
            
            while(umap[nums[p2]]>k){
                umap[nums[p1]]--;
                if(umap[nums[p1]]==0) umap.erase(nums[p1]);
                p1++;
            }
            ans=max(ans, p2-p1+1);
        }
        return ans;
    }
};