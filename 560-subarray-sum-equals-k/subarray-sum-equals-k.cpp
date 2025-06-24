class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        long pf[n];
        long sum=0; 
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
            pf[i]=sum;
        }
        int count=0;
        
        unordered_map<long,int> umap;
        umap[0]=1;
        for(int j=0;j<n;j++){
            if(umap.find(pf[j]-k)!= umap.end()){
                count= count+umap[pf[j]-k];

            }
            umap[pf[j]]++;
        }
        return count;

        
    }
};