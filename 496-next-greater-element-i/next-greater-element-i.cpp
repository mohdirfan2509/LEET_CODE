class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        unordered_map<int,int> umap;
        int n2=nums2.size();
        int n1=nums1.size();
        vector<int> res(n2,-1);
        vector<int> ans(n1,0);
        for(int i=n2-1;i>=0;i--){
            while(st.size()>0 && nums2[i]>=st.top()){
               st.pop();
            }
            if(st.size()>0) res[i]=st.top();
            st.push(nums2[i]);
        }
        for(int i=0;i<n2;i++){
            umap[nums2[i]]=res[i];
        }
        for(int i=0;i<n1;i++){
            ans[i]=umap[nums1[i]];
        }
        return ans;
    }
};