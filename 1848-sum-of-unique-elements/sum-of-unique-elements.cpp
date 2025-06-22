class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> umap;
        // unordered_set<int> uset(nums.begin(),nums.end());
        int sum=0;
        for(int i:nums){ umap[i]++;}
        for(auto& i:umap){

            if(i.second==1){ sum=sum+i.first;}
            
        }

        return sum;
    }
};