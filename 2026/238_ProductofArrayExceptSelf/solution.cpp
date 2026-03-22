class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size(), 1);
        for (int i = nums.size() - 2; i >= 0; i--) {
            result[i] = result[i + 1] * nums[i + 1];
        }

        int helper = 1;
        for (int i = 0; i < nums.size(); i++) {
            if (i != 0) {
                helper *= nums[i - 1];
                result[i] *= helper;
            }
        }

        return result;
    }
};