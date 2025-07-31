class Solution {
public:
    int last;
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int n= dist.size();
        int l=1, h= 1e7;
        int  ans=-1;
        while(l<=h){
            int m=(l+h)/2;
            if(check(dist, m, hour)){
                ans=m;
                h=m-1;
            }
            else l=m+1;
        }
        return ans;
        
    }

    bool check(vector<int>& dist, int speed, double hour){
        double time=0.0;
        for(int i=0;i<dist.size();i++){
            double t= (double) dist[i]/speed;
            if(i != dist.size()-1){
                 time = time+ceil(t);
            }     
            else time = time +t;
           
        }
        return time<=hour;

    }
};