class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> count;
        vector<vector<int>> bucket(nums.size() + 1);
        vector<int> ans;

        for(int n : nums) count[n]++;

        for(auto pair : count) {
            bucket[pair.second].push_back(pair.first);
        }

        for(int i = bucket.size() - 1; i >= 0; i--) {
            for(int n : bucket[i]) {
                if(ans.size() == k) return ans;

                ans.push_back(n);
            }
        }

        return ans;
    }
};
