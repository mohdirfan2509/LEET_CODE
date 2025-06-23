class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n= nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0) nums[i]=-1;
        }
        int pf[n];
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
            pf[i]=sum;
        }
        unordered_map<int,int> umap;
        umap[0]=-1;
        int ans=0;
        for(int i=0;i<n;i++){
            if(umap.find(pf[i])==umap.end()){
                umap[pf[i]]=i;
            }
            else{
                int l= i-umap[pf[i]];
                ans=max(ans,l);
            }
        }
        return ans;

        
    }
};