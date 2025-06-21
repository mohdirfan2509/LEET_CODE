class Solution {
public:
    char findTheDifference(string s, string t) {

        unordered_map<char,int> umap;

        for(char x:s){ umap[x]++;}
        for(char x:t){ if(--umap[x]<0) return x;}

    return ' ';
    }
};