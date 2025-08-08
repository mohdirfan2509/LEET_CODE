class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n=nums.size();
        int p1=0,p2=1;
        int count=0;
        while(p2<n && p1<n){
            if(p1==p2 ){
                p2++;
                continue;
            }
            if(nums[p2]-nums[p1]==k){
                // count++;
                // p1++;
                // if(p1==p2) p2++;
                count++;
                int x = nums[p1];
                int y = nums[p2];
                
                while(p1<n && nums[p1] == x) p1++;
                while(p2<n && nums[p2] == y) p2++;
                
                
            }
            else if((nums[p2]-nums[p1])>k){
                 p1++;
                 
            }
            else p2++;
        }
        return count;
    }
};