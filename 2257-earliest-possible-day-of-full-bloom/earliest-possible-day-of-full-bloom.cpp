class Solution {
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        int n=plantTime.size();
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++){
            v.push_back({growTime[i],plantTime[i]});
        }

        sort(v.begin(),v.end());
        int ans=0;
        int start=0;
        for(int i=n-1;i>=0;i--){
            int b=start+v[i].first + v[i].second;
            ans=max(ans,b);
            start=start+v[i].second;
        }

        return ans;
    }
};