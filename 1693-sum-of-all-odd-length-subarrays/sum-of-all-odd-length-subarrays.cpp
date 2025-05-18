class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        int total=0;

        for(int i=0;i<n;i++){
            
            int all_subarrays= (i+1)*(n-i);
            int oddCount= ( all_subarrays + 1)/2;
            total+= arr[i]*oddCount;

        }
        
    return total;
    }
};