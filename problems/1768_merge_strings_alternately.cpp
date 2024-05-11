class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged_word = "";
        int word1_length = word1.size();
        int word2_length = word2.size();
        int i = 0, j = 0;

        while (j < word2_length || i < word1_length) {
            if (i < word1_length) {
                merged_word.push_back(word1[i++]);
            }
            if (j < word2_length) {
                merged_word.push_back(word2[j++]);
            }
        }
        return merged_word;
    }
};
