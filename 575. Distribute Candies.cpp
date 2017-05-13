class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        set<int> s;
        for(int x : candies) {
            s.insert(x);
        }
        return min(s.size(), candies.size()/2);
    }
};
