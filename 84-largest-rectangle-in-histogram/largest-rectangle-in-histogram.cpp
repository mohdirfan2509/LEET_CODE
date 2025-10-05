class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        stack<int> st1;
        vector<int> left(n,-1);
        for(int i=0;i<n;i++){
            while(st1.size()>0 && heights[st1.top()]>=heights[i]) st1.pop();

            if(st1.size()>0) left[i]=st1.top();
            st1.push(i);
        }

        stack<int> st2;
        vector<int> right(n,n);
        for(int i=n-1;i>=0;i--){
            while(st2.size()>0 && heights[st2.top()]>=heights[i]) st2.pop();

            if(st2.size()>0) right[i]=st2.top();
            st2.push(i);
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans=max(ans,heights[i]*(right[i]-left[i]-1));
        }
        return ans;
    }
};