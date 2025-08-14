class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int p1=0,p2=n-1;
        int maxArea=INT_MIN;
        int minHeight=0;
        int currentArea=0;
        while(p1<p2){
            minHeight=min(height[p1],height[p2]);
            currentArea=minHeight*(p2-p1);
            maxArea=max(maxArea,currentArea);
            if(height[p1]<=height[p2]) p1++;
            else p2--;
        }
        return maxArea;
        
    }
};