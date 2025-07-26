class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n= weights.size();
        int sum=0;
        int mini=0;
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            sum= sum+weights[i];
            mini=max(mini,weights[i]);
        }
        int l=mini, h=sum;
        while(l<=h){
            int m= (l+h)/2;
            if(check(weights, m, days)==true){
                ans= min(ans,m);
                h=m-1;
            }
            else l=m+1;
        }
        return ans;
        
    }

    bool check(vector<int>& weights,int m, int days){
        int s=0;
        int count=1;
        for(int i=0;i<weights.size();i++){
            s=s+weights[i];
            if(s>m){
                s=weights[i];
                count++;
            }
        }
        return count<= days;


    }
};