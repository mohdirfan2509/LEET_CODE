class Solution {
public:
    void reverseString(vector<char>& s) {
        
           int p1=0,p2=s.size()-1;
        while(p1<p2){
             
            int temp=s[p1];
            s[p1]=s[p2];
            s[p2]= temp;
            p1++;
            p2--;

        }
        
    }
};