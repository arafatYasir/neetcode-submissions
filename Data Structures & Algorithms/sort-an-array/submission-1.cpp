class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        map<int, int> mp;

        for(int n : nums) {
            mp[n]++;
        }

        vector<int> ans(n);
        int idx = 0;

        for(auto &pair : mp) {
            for(int i = 1; i <= pair.second; i++) {
                ans[idx++] = pair.first;
            }
        }

        return ans;
    }
};