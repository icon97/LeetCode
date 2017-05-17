class Solution {
public:
    int findLUSlength(string a, string b) {
        return a.compare(b) ? max(a.size(), b.size()) : -1;
    }
};
