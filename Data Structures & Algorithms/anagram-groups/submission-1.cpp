class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> ans;
        int n = strs.size();

        for(int i = 0; i < n; i++) {
            vector<int> count(26, 0);
            string key = "";

            for(auto c : strs[i]) {
                count[c - 'a']++;
            }

            for(int i = 0; i < 26; i++) {
                key += to_string(count[i]) + '#';
            }

            mp[key].push_back(strs[i]);
        }

        for(const auto &pair : mp) {
            ans.push_back(pair.second);
        }

        return ans;
    }
};
