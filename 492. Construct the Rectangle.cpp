class Solution {
public:
    vector<int> constructRectangle(int area) {
        int tmp = sqrt(area);
        while(area%tmp!=0) tmp--;
        return vector<int> {area/tmp, tmp};
    }
};
