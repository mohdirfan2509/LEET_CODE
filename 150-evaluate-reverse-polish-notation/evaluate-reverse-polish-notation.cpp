class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n= tokens.size();
        stack<int> st;
        for(string c:tokens){
            if(c=="+"){
                int b= st.top();  st.pop();
                int a=st.top();   st.pop();
                st.push(a+b);
            }else if(c=="-"){
                int b= st.top();  st.pop();
                int a=st.top();   st.pop();
                st.push(a-b);
            }else if(c=="*"){
                int b= st.top();  st.pop();
                int a=st.top();   st.pop();
                st.push(a*b);
            }else if(c=="/"){
                int b= st.top();  st.pop();
                int a=st.top();   st.pop();
                st.push(a/b);
            }else{
                st.push(stoi(c));
            }
        }
        return st.top();
        
    }
};