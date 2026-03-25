class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> charsCount;

        if (s.size() != t.size()) {
            return false;
        }

        for (int i = 0; i < s.size(); i++) {
            charsCount[s[i]]++;
            charsCount[t[i]]--;
        }

        for (auto i : charsCount) {
            if (i.second != 0) {
                return false;
            }
        }

        return true;
    }
};