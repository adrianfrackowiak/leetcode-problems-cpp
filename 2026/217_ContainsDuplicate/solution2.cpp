class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> numSeen;
        for (auto& i : nums) {
            if (numSeen.count(i)) {
                return true;
            }

            numSeen.insert(i);
        }

        return false;
    }
};