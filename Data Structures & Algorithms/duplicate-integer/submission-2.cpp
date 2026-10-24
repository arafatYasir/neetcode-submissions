class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> check;

        for(int i = 0; i < int(nums.size()); i++) {
            if(check.find(nums[i]) != check.end()) {
                return true;
            }

            check.insert(nums[i]);
        }

        return false;
    }
};