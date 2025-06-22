class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> umap;
        for(char i:magazine){ umap[i]++;}

        for(char i:ransomNote){
            if(umap.find(i)==umap.end()){return false;}
            if(umap.find(i)!=umap.end()){--umap[i];}
            if(umap[i]<0){ return false;}
        }
        

        return true;
        
    }
};