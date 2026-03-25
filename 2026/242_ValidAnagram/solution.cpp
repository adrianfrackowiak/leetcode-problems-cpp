class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> charsS;
        unordered_map<char, int> charsT;

        if (s.size() != t.size()) {
            return false;
        }

        for (int i = 0; i < s.size(); i++) {
            charsS[s[i]]++;
            charsT[t[i]]++;
        }

        for (auto i : charsS) {
            if (i.second != charsT[i.first]) {
                return false;
            }
        }

        return true;
    }
};