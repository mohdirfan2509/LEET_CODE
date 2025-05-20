class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        int n = nums.size();
        long sum = 0;
        double avg=0;
        double max_avg= INT_MIN;

        for(int i=0;i<k;i++){
            sum =sum + nums[i];
            avg= static_cast<double> (sum)/k;

        }
        max_avg = max(avg , max_avg);
        for(int i =k; i<n;i++){
            sum = sum +nums[i]-nums[i-k];
            avg= static_cast<double> (sum)/k;
            max_avg= max(avg , max_avg);

        }
        return max_avg;
        
    }
};