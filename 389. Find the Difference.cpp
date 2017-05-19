class Solution {
public:
    char findTheDifference(string s, string t) {
        int ret = 0;
        for(char c : s) ret ^= c;
        for(char c : t) ret ^= c;;
        return ret;
    }
};
