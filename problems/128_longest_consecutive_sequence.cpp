class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> nums_set(nums.begin(), nums.end());
        int result = 0;

        for (auto num : nums_set) {
            if (!nums_set.count(num - 1)) {
                int length = 1;
                while (nums_set.count(num + length)) {
                    length++;
                }
                result = max(result, length);
            }
        }
        return result;
    }
};
