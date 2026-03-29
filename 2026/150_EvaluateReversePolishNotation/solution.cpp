class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int result = 0;
        stack<int> numbersStack;
        unordered_map<string, function<int(int,int)>> ops = {
            {"+", [](int a, int b) { return a + b; }},
            {"-", [](int a, int b) { return a - b; }},
            {"*", [](int a, int b) { return a * b; }},
            {"/", [](int a, int b) { return a / b; }}
        };

        for (auto& i : tokens) {
            if (ops.count(i)) {
                int secondNum = numbersStack.top();
                numbersStack.pop();
                int firstNum = numbersStack.top();
                numbersStack.pop();
                int res = ops[i](firstNum, secondNum);
                numbersStack.push(res);
            } else {
                int num = stoi(i);
                numbersStack.push(num);
            }
        }

        return numbersStack.top();
    }
};