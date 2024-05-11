class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int array_length = score.size();
        vector<int> score_copy(array_length);
        copy(score.begin(), score.end(), score_copy.begin());
        unordered_map<int, int> score_to_index;

        for (int i = 0; i < array_length; i++) {
            score_to_index[score_copy[i]] = i;
        }

        sort(score_copy.begin(), score_copy.end(), greater<int>());
        
        vector<string> result(array_length);
        for (int i = 0; i < array_length; i++) {
            if (i == 0) {
                result[score_to_index[score_copy[i]]] = "Gold Medal";
            } else if (i == 1) {
                result[score_to_index[score_copy[i]]] ="Silver Medal";
            } else if (i == 2) {
                result[score_to_index[score_copy[i]]] = "Bronze Medal";
            } else {
                result[score_to_index[score_copy[i]]] = to_string(i + 1);
            }
        }

        return result;
    }
};
