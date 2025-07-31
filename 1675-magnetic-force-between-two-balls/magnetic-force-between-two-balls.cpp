class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());
        int n= position.size();
        int l=1, ans=0;
        int h=position[n-1]-position[0];
      

        while(l<=h){
            int mid=(l+h)/2;
            if(check(position, mid, m)){
                ans= mid;
                l=mid+1;          
            }
            else h= mid-1;
        }
        return ans;
        
    }

    bool check(vector<int>& position, int mid, int m){
        int count=1;
        int initial=position[0];
        int len=0;
        for(int i=0;i<position.size();i++){
            len= abs(position[i]-initial);
            if(len>=mid){
                count++;
                initial=position[i];
            }
        }
        return count>=m;
    }
};