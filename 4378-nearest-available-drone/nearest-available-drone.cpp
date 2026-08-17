class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int n = drones.size();
        int ansIndex = 0;
        int minDist = INT_MAX;
        bool flag = true;
        for (int i = 0; i < n; i++) {
            int currDist =
                abs(drones[i][0] - target[0]) + abs(drones[i][1] - target[1]);
            if (currDist <= drones[i][2]) {
                if (minDist > currDist) {
                    flag = false;
                    minDist = currDist;
                    ansIndex = i;
                }
            }
        }
        if (flag) {
            return -1;
        } else {
            return ansIndex;
        }
    }
};