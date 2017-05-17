class Solution {
public:
    string reverseString(string s) {
        int l=0, r=s.size()-1;
        while(l<r) {
            swap(s[l++], s[r--]);
        }
        return s;
    }
};
