class Solution {
public:
    int hammingDistance(int x, int y) {
        int cnt = 0, tmp = x^y;
        while(tmp) {
            tmp &= tmp-1;
            cnt++;
        }
        return cnt;
    }
};
