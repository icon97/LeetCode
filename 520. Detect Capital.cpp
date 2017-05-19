class Solution {
public:
    bool detectCapitalUse(string s) {
        if(s.size()<2) return true;
        if(islower(s[0]) && isupper(s[1])) return false;
        for(int i=2; i<s.size(); i++) {
            if(islower(s[i]) != islower(s[i-1]))
                return false;
        }
        return true;
    }
};
