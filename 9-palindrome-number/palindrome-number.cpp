class Solution {
public:
    bool isPalindrome(int x) {
        int a=x;
        long reverse=0;
       
        while(a>0){
           int temp=a%10;
           reverse=reverse*10+temp;
           a=a/10;
        }
        return x==reverse ;
    }
};