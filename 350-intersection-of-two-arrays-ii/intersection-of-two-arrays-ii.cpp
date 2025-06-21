class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int,int> umap1;
        vector<int> res;
        for(int i:nums1){
            umap1[i]++;

        }
        for(int x:nums2){
            if(umap1.find(x) != umap1.end()){

                res.push_back(x);
                --umap1[x];
                if(umap1[x]==0){ umap1.erase(x);}

            }
        }
        return res;
  
    }
};