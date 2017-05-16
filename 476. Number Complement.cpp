class Solution {
public:
    int findComplement(int num) {
        int x = num, tmp = num;
        while((tmp &= tmp-1)) {
            x = tmp;
        }
        return (x<<1) - num - 1;
    }
};
