class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ret(n);
        for(int i=1; i<=n; i++) {
            if(i%3==0) ret[i-1] += "Fizz";
            if(i%5==0) ret[i-1] += "Buzz";
            if(ret[i-1].empty()) ret[i-1] += to_string(i);
        }
        return ret;
    }
};
