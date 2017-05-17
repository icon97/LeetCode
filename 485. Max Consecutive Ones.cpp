class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = 0, mx = 0;
        for(int x : nums) {
            mx = max(mx, cnt=(x ? cnt+1 : 0));
        }
        return mx;
    }
};
