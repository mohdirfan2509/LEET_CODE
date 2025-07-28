class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(),piles.end());
        int n= piles.size();
        int ans=0;
        int l=1, high=*max_element(piles.begin(),piles.end());
        while(l<=high){
            int m=(l+high)/2;
            if(check(piles, m, h)){
                ans=m;
                high=m-1;
            }
            else{
                l=m+1;
            }
        }
        return ans;
    }

    bool check(vector<int>& piles, int m, int h){
        long sum=0;
        for(int i=0;i<piles.size();i++){
            sum=sum+ceil((double)piles[i]/m);
        }
        return sum<=h;
    }
};