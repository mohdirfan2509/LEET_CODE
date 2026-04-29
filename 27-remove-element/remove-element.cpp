class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        vector<int> res(n,0);
        int i=0;
        for(int x:nums){
            if(x!=val){
                res[i]=x;
                i++;
            }
        }
        nums=res;
        return i;
    }
};