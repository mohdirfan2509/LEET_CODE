class Solution {
public:
    bool isPerfectSquare(int num) {
        
        long l=0, h=max(num, INT_MAX);
        while(l<=h){
            long m = (l+h)/2;
            if(m*m== num) return true;
            if(m*m > num) h=m-1;
            else l= m+1;
        }
        return false;
    }
};