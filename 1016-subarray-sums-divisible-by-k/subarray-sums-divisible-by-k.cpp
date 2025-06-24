class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int count=0;
        int n= nums.size();
        vector<long> pf(n);
        long sum=0;
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
            pf[i]=sum;
        }
        unordered_map<int,int> umap;
        umap[0]=1;
        for(int i=0;i<n;i++){
            int rem= (pf[i]%k + k) % k;
            if(umap.find(rem)!=umap.end()){

                count=count+umap[rem];
            }
            umap[rem]++;
        }
        return count;
        
    }
};