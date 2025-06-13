class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {

        vector<vector<int>> res(n,vector<int>(n));
        
        int left = 0,right = n-1;
        int top = 0, bottom = n-1;
        int val=1;

        while(left<=right && top<=bottom){
               
                // left to right
            for(int j=left;j<=right;j++){
                res[top][j]= val++; 
            }
            top++;
                    // top to bottom
            for(int i=top; i<=bottom;i++){
                res[i][right]= val++; 
            }
            right--;

            // right to left

            if(top<=bottom){

                for(int j=right; j>=left;j--){
                    res[bottom][j]= val++;
                }
                bottom--;

            }
            // bottom to top

            if(left<=right){
                for(int i=bottom; i>=top;i--){
                    res[i][left]= val++;

                }
                left++;
            }
        }
        return res;


        
    }
};