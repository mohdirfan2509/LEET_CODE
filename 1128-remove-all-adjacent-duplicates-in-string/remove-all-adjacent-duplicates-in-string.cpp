class Solution {
public:
    string removeDuplicates(string s) {
        int n=s.length();
        if(n==1) return s;
        stack<char> st;
        for(int i=n-1;i>=0;i--){
            if(st.size()==0 || s[i]!= st.top()){
                st.push(s[i]);
            }else{
                st.pop();
            }
        }
        string ans="";
        while(st.size()>0){
            ans+=st.top();
            st.pop();
        }

        return ans;
    }
};