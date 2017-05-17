class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int sum = 0, n = grid.size(), m = grid[0].size();
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(!grid[i][j]) continue;
                sum += 4;
                if(i<n-1 && grid[i+1][j]) sum -= 2;
                if(j<m-1 && grid[i][j+1]) sum -= 2;
            }
        }
        return sum;
    }
};
