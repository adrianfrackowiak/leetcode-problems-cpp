class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> nums_map;
        int res = 0;
        for (int num : nums) {
            if (nums_map.find(num) != nums_map.end()) {
                res += nums_map[num];
                nums_map[num]++;
            } else {
                nums_map[num] = 1;
            }
        }

        return res;
    }
};

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int res = 0;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] == nums[j]) {
                    res++;
                }
            }
        }
        return res;
    }
};
