class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ret;
        for(int x : nums) {
            int tmp = abs(x)-1;
            nums[tmp] = -1*abs(nums[tmp]);
        }
        for(int i=0; i<nums.size(); i++) {
            if(nums[i] > 0) ret.push_back(i+1);
        }
        return ret;
    }
};
