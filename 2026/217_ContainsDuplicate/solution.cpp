class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> numsMap;
        for (auto& i : nums) {
            if (numsMap[i] >= 1) {
                return true;
            }

            numsMap[i]++;
        }

        return false;
    }
};