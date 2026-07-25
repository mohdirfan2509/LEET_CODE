class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int n=numRows;
        vector<vector<int>> arr(n);
        arr[0].push_back(1);
        for (int i = 1; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                if (j<arr[i-1].size() && j-1 >=0) {
                    arr[i].push_back(arr[i - 1][j] + arr[i - 1][j - 1]);
                }else{
                    if(j>=arr[i-1].size()){
                        arr[i].push_back(arr[i - 1][j - 1]);
                    }else{
                        arr[i].push_back(arr[i - 1][j]);
                    }
                }
            }
        }
        return arr;
    }
};