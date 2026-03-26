class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numsSet;
        int result = 0;
        for (auto& num : nums) {
            numsSet.insert(num);
        }

        for (auto num : numsSet) {
            if (numsSet.find(num - 1) == numsSet.end()) {
                int curr = 0;
                int next = num;

                while(numsSet.find(next) != numsSet.end()) {
                    curr++;
                    next++;
                }

                result = max(result, curr);
            }
        }

        return result;
    }
};