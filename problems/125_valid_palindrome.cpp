class Solution {
public:
    bool isPalindrome(string s) {
        string transformed = "";

        for (int i = 0; i < s.length(); i++) {
            if (isalnum(s[i])) {
                transformed += tolower(s[i]);
            }
        }

        int first = 0;
        int last = transformed.size() - 1;

        while (first < last) {
            if (transformed[first] != transformed[last]) {
                return false;
            }
            first++;
            last--;
        }

        return true;
    }
};
