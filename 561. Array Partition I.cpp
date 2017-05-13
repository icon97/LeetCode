// O(nlogn)
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

//O(n)
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int a[20001], sum = 0;
        bool flag = true;
        
        memset(a, 0, sizeof(a));
        
        for(int x : nums) {
            a[x+10000]++;
        }
        
        for(int i=0; i<20001; i++) {
            while(a[i]) {
                if(flag) sum += i-10000;
                flag = !flag;
                a[i]--;
            }
        }
        return sum;
    }
};
