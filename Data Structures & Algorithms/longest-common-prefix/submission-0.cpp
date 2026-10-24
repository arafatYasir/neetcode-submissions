class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());

        string first = strs[0], last = strs[strs.size() - 1], ans = "";

        for(int i = 0; i < first.size(); i++) {
            if(first[i] != last[i]) break;

            ans += first[i];
        }

        return ans;
    }
};