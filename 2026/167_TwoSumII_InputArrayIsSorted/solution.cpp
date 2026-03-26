class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;
        int res = 0;
        vector<int> result;
        
        while (left != right) {
            res = numbers[left] + numbers[right];
            if (target == res) {
                result.push_back(left + 1);
                result.push_back(right + 1);
                return result;
            }
            
            if (target < res) {
                right--;
            } else if (target > res) {
                left++;
            }
        }

        return result;
    }
};