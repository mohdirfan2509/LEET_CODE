class Solution {
public:
    string smallestPalindrome(string s) {
        int n=s.size();
        string s1="";
        for(int i=0;i<=(n/2)-1;i++){
            s1+=s[i];
        }
        sort(s1.begin(),s1.end());
        string first=s1;
        reverse(s1.begin(),s1.end());
        string second=s1;
        if(n%2==0){
            return first+=second;
        }else{
            string ans=first+s[n/2]+second;
            return ans;
        }

    }
};