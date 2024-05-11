class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        unordered_map<int, vector<int>> group_map;
        vector<vector<int>> groups_array;
        for (int i = 0; i < groupSizes.size(); i++) {
            group_map[groupSizes[i]].push_back(i);

            if (group_map[groupSizes[i]].size() == groupSizes[i]) {
                groups_array.push_back(group_map[groupSizes[i]]);
                group_map[groupSizes[i]].clear();
            }
        }

        return groups_array;
    }
};
