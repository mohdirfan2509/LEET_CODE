class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n= nums.size();
        int count=0;
        for(int i=0; i<n-1;i++){

            int sum1=0;
            int sum2=0;

            for(int j=0;j<=i;j++){
                sum1=sum1+nums[j];
            }
            for(int k=i+1;k<n;k++){
                sum2=sum2+nums[k];

            }
            if((sum1-sum2) % 2==0){
                count++;
            }
        }
        return count;

        
    }
};