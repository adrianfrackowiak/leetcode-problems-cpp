class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> words;
        vector<vector<string>> result;

        for (auto &word : strs) {
            string wordCopy = word;
            sort(word.begin(), word.end());
            words[word].push_back(wordCopy);
        }

        for (auto &key : words) {
            result.push_back(key.second);
        }

        return result;
    }
};