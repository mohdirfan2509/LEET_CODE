class Solution {
public:
    int romanToInt(string s) {
        int n=s.size();
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            if(s[i]=='I'){
                arr[i]=1;
            }else if(s[i]=='V'){
                arr[i]=5;
            }else if(s[i]=='X'){
                arr[i]=10;
            }else if(s[i]=='L'){
                arr[i]=50;
            }else if(s[i]=='C'){
                arr[i]=100;
            }else if(s[i]=='D'){
                arr[i]=500;
            }else if(s[i]=='M'){
                arr[i]=1000;
            }
        }
        int sum=0;
       if(n>1){
         for(int i=0;i<n-1;i++){
            if(arr[i]<arr[i+1]){
                sum=sum-arr[i];
            }else{
                sum=sum+arr[i];
            }
         }
         sum=sum+arr[n-1];
       }else{
         sum=arr[0];
       }

       return sum;
        
    }
};  