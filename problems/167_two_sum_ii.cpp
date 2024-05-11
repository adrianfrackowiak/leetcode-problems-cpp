class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> nums_map;

        for (int i = 0; i < numbers.size(); i++) {
            int diff = target - numbers[i];

            if (nums_map.find(diff) != nums_map.end()) {
                return {nums_map[diff]+1, i+1};
            }
            
            nums_map[numbers[i]] = i;
        }
        return {};
    }
};
