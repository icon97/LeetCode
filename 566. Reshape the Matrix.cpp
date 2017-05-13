class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int n = nums.size(), m = nums[0].size(), multi = n*m;
        if(multi != r*c) return nums;
        vector<vector<int>> ret(r, vector<int>(c));
        for(int i=0; i<multi; i++) {
            ret[i/c][i%c] = nums[i/m][i%m];
        }
        return ret;
    }
};
