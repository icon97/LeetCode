class Solution {
public:
    long myAtoi(string str) {
        long num=0, pos=0, nega=1, intMax=1L<<31;
        while(str[pos]==' ') pos++;
        if(str[pos]=='+' || str[pos]=='-') {
            nega = (str[pos]=='+') ? 1 : -1;
            pos++;
        }
        
        for(;pos<str.size(); pos++) {
            if(!isdigit(str[pos]) || num>INT_MAX) break;
            num = 10*num + (str[pos]-48);
        }
        return min(num, intMax-(nega==1?1:0))*nega;
    }
};
