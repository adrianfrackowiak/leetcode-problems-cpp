class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int> stones_count;
        int res = 0;
        for (auto stone : stones) {
            stones_count[stone]++;
        }
        for (auto jewel : jewels) {
            if (stones_count.find(jewel) != stones_count.end()) {
                res += stones_count[jewel];
            }
        }
        return res;
    }
};
