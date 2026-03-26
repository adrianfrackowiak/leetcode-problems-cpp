class Solution {
public:
    bool isValid(string s) {
        stack<char> brackets;
        unordered_map<char, char> bracketChars{{')', '('}, {'}', '{'}, {']', '['}};

        for (auto& ch : s) {
            if (!brackets.empty() && brackets.top() == bracketChars[ch]) {
                brackets.pop();
                continue;
            }
            brackets.push(ch);
        }

        return brackets.empty();
    }
};