/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        
        long l=0, h=n;
        while(l<=h){
            long m= (l+h)/2;
            int res= guess(m); 
            if(res==0) return m;
            else if(res== -1){
                h=m-1;
            }
            else l=m+1;
        }
        return 0;
        
    }
};