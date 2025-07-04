class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
           k=k % nums.size();
           reverse(nums,0, nums.size()-1 );
           reverse(nums,0, k-1 );
           reverse(nums,k, nums.size()-1 );
           
    }

     void reverse(vector<int>& nums,int l, int r){
            int p1= l,p2= r;
           while(p1<p2){
            int temp = nums[p1];
            nums[p1]=nums[p2];
            nums[p2]= temp;
            p1++;
            p2--;
          }

        }
};