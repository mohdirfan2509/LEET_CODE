// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {

    
    long l=0, h= max(n,INT_MAX);
    long ans= INT_MAX;

    while(l<=h){
        long m= (l+h)/2;
        bool target= isBadVersion(m);
        if(target){
            ans= min(ans,m);
            h=m-1;
        }
        else l=m+1;
    }
    return ans;
        
    }
};