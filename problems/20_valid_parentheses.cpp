class Solution {
public:
    bool isValid(string s) {
        stack<char> result;
        unordered_map<char, char> brackets = {{'}','{'}, {')', '('}, {']', '['}};

        for (int i = 0; i < s.length(); i++) {
            if (brackets.find(s[i]) != brackets.end()) {
                if (result.empty()) {
                    return false;
                }

                if (result.top() != brackets[s[i]]) {
                    return false;
                }

                result.pop();
            } else {
                result.push(s[i]);
            }
        }

        return result.empty();
    }
};
