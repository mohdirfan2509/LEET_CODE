class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size();
        int m=needle.size();
        int ans=-1;
        int p1=0;
        for(int i=0;i<n-m+1;i++){
            if(haystack[i]==needle[p1]){
                int start=i;
               while(p1<m){
                if(haystack[start]==needle[p1]){
                    start++;
                    p1++;
                }else{
                    p1=0;
                    break;
                }
               }
               if(p1==m){
                ans=i;
               }
            }
        }
        return ans;
    }
};