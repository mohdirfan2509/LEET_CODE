class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        int res=0;
        int p1=0,p2=0;
        while(p1<n1 && p2<n2){
            int diff=p2-p1;
            if(nums1[p1]<=nums2[p2]){
                res=max(res,diff);
                p2++;
            }
            else p1++;
        }
        return res;
        
    }
};