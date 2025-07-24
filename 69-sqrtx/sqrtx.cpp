class Solution {
public:
    int mySqrt(int x) {
        long l=1, h= min(x, INT_MAX);
        long ans=0;
        while(l<=h){
           long m= (l+h)/2;
            if(m*m <= x){
                ans= max(ans,m);
                l=m+1;
            } 
            else  h= m-1;
            
        }
        return ans;
    }
};