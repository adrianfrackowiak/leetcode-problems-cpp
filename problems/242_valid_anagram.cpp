class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> sMap;
        unordered_map<char, int> tMap;

        if (s.length() != t.length()) {
            return false;
        }

        for (int i = 0; i < s.length(); i++) {
            sMap[s[i]]++;
            tMap[t[i]]++;
        }

        for (auto [key, value] : sMap) {
            if (sMap[key] != tMap[key]) {
                return false;
            }
        }

        return true;
    }
};

class Solution {
public:
    bool isAnagram(string s, string t) {
        int longer = 0;
        if (s.length() > t.length()) {
            longer = s.length();
        } else {
            longer = t.length();
        }

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        for (int i = 0; i < longer; i++) {
            if (s[i] != t[i]) {
                return false;
            }
        }

        return true;
    }
};
