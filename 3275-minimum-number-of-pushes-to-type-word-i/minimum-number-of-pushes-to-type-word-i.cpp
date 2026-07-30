class Solution {
public:
    int minimumPushes(string word) {
        int n=word.size();
        if(n<=8){
            return n;
        }else{
            int pushes=1;
            int ans=0;
            while(n>=0){
                if(n>=8){
                    ans=ans+8*pushes;
                    n=n-8;
                    pushes++;
                }else{
                    ans=ans+n*pushes;
                    n=0;
                    break;
                }

            }
            return ans;
        }
        
    }
};