class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zero = -1;
        while(nums[++zero]);
        for(int i=zero+1; i<nums.size(); i++) {
            if(nums[i]) nums[zero++] = nums[i];
        }
        while(zero < nums.size()) nums[zero++] = 0;
    }
};
