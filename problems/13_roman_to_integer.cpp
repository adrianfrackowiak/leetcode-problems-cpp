class Solution {
public:
    int romanToInt(string s) {
        int res = 0;
        unordered_map<char, int> num_map;
        num_map = {{'I', 1},  {'V', 5},  {'X',10},  {'L', 50},  {'C', 100},  {'D', 500},  {'M', 1000}};

        for (int i = 0; i < s.length(); i++) {
            if (num_map[s[i]] < num_map[s[i+1]]) {
                res -= num_map[s[i]];
            } else {
                res += num_map[s[i]];
            }
        }

        return res;
    }
};
