// O(n2)
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        vector<int> ret;
        nums.push_back(-1);
        for(int x : findNums) {
            int pos = 0;
            while(nums[pos] != x) pos++;
            while(nums[pos] <= x && pos < nums.size()-1) {
                pos++;
            }
            ret.push_back(nums[pos]);
        }
        return ret;
    }
};

// O(n)
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        vector<int> ret;
        stack<int> s ;
        map<int, int> m;
        
        for(int x : nums) {
            while(!s.empty()) {
                if(s.top() > x) break;
                m[s.top()] = x;
                s.pop();
            }
            s.push(x);
        }
        
        while(!s.empty()) {
            m[s.top()] = -1;
            s.pop();
        }
        
        for(int x : findNums) {
            ret.push_back(m[x]);
        }
        return ret;
    }
};
