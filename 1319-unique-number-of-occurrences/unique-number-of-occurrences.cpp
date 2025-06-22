class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> umap;
        unordered_set<int> usetOfFreq;
        for(int i:arr){
            umap[i]++;
        }

        for(auto i:umap){
            usetOfFreq.insert(i.second);
        }
        return umap.size()== usetOfFreq.size();
        
    }
};