class Solution {
public:
    int longestContinuousSubstring(string s) {
        int n= s.length();
       int currLen=1;
       int maxLen=1;
       for(int i=1;i<n;i++){

        if(s[i]-s[i-1]==1){
             currLen++;
             maxLen= max(maxLen,currLen);
        
        }
        else{ currLen=1;}
    
       }
       return maxLen; 
    }
};