class Solution {
public:
    string removeDuplicateLetters(string s) {
        int n=s.length();
        unordered_map<char,int> umap;
        for(int i=0;i<n;i++){
            umap[s[i]]++;
        }  
        unordered_set<char> uset; 
        stack<char> st;

        for(int i=0;i<n;i++){

            if(uset.find(s[i]) !=uset.end()) umap[s[i]]--;
            else{
                while(st.size()>0 && st.top()>s[i] && umap[st.top()]>0){
                    uset.erase(st.top());
                    st.pop();
                }
                st.push(s[i]);
                uset.insert(s[i]);
                umap[s[i]]--;
            }
        }
        string ans="";
        while(st.size()>0){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;

    }
};