class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int minSize = INT_MAX, n = strs.size();
        string ans = "";
    
        for(int i = 0; i < n; i++) {
            minSize = min(minSize, int(strs[i].size()));
        }

        for(int i = 0; i < minSize; i++) {
            bool ok = true;

            for(int j = 0; j < n - 1; j++) {
                if(strs[j][i] != strs[j + 1][i]) {
                    ok = false;
                    break;
                }
            }

            if(!ok) break;

            ans += strs[0][i];
        }

        return ans;
    }
};