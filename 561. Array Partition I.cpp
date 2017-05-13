class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int n = nums.size()/2, sum = 0;
        sort(nums.begin(), nums.end());
        for(int i=0; i<n; i++) {
            sum += nums[i*2];
        }
        return sum;
    }
};
