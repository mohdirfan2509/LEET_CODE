class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> uset(nums1.begin(),nums1.end());
        unordered_set<int> res;
        int n1= nums1.size();
        int n2= nums2.size();

        for(int x:nums2){
            if(uset.find(x) != uset.end()){

                res.insert(x);
                uset.erase(x);
            }
        }

     return vector<int> (res.begin(), res.end());   
    }
};