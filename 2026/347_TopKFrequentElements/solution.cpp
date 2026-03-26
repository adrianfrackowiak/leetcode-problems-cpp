class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> counts;
        vector<int> result;

        for (auto &i : nums) {
            counts[i]++;
        }

        vector<pair<int,int>> pairs;

        for (auto &i : counts) {
            pairs.push_back(i);
        }

        sort(pairs.begin(), pairs.end(), [](auto &a, auto &b) { return a.second > b.second; });

        for (int i = 0; i < k; i++) {
            result.push_back(pairs[i].first);
        }

        return result;
    }
};