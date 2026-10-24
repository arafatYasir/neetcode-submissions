class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        map<string, vector<string>> mp;

        for(string s : strs) {
            string key = "";
            vector<int> count(26, 0);

            for(char c : s) count[c - 'a']++;

            key = to_string(count[0]);
            for(int i = 1; i < 26; i++) {
                key += "," + to_string(count[i]);
            }

            mp[key].push_back(s);
        }

        for(auto &pair : mp) {
            ans.push_back(pair.second);
        }

        return ans;
    }
};
