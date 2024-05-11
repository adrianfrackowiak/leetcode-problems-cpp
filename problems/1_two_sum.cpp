class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> nums_map;

        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            if (nums_map.find(diff) != nums_map.end()) {
                return {nums_map[diff], i};
            }
            nums_map[nums[i]] = i;
        }
        return {};
    }
};

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size() - 1; i++) {
            for (int j = 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target && i != j) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};
