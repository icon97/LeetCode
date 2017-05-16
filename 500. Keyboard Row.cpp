class Solution {
public:
    bool checkStr(int check[256], string s) {
        if(s.size() < 2) return true;
        for(int i=1; i<s.size(); i++) {
            if(check[s[i]] != check[s[i-1]])
                return false;
        }
        return true;
    }
    
    vector<string> findWords(vector<string>& words) {
        vector<string> ret, key = {"qwertyuiop", "asdfghjkl", "zxcvbnm"};
        int check[256];
        
        for(int i=0; i<key.size(); i++) {
            for(char c : key[i]) {
                check[tolower(c)] = check[toupper(c)] = i;
            }
        }
        
        for(string s : words) {
            if(checkStr(check, s)) ret.push_back(s);
        }
        return ret;
    }
};
