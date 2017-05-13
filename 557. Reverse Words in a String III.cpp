class Solution {
public:
    void Reverse(string& s, int l, int r) {
        while(l<r) {
            swap(s[l++], s[r--]);
        }
    }
    string reverseWords(string s) {
        int l = 0, r;
        while(l<s.size()) {
            r = l;
            while(s[r]!=' ' && r<s.size()) r++;
            Reverse(s, l, r-1);
            while(s[r]==' ' && r<s.size()) r++;
            l = r;
        }
        return s;
    }
};
