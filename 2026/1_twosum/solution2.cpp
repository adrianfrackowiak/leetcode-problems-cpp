class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> keys;

        for (int i = 0; i < nums.size(); i++) {
            int rest = target - nums[i];
            auto it = keys.find(rest);

            if (it != keys.end()) {
                return {it->second, i};
            }

            keys[nums[i]] = i;
        }

        return {};
    }
};