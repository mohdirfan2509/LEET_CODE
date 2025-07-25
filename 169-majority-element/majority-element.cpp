class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n= nums.size();
        unordered_map<int,int> umap;
        for(int i:nums){
            umap[i]++;
        }
        for(auto& i :umap){

            if(i.second> (n/2)){ return i.first;}

        }
        return -1;
        
    }
};