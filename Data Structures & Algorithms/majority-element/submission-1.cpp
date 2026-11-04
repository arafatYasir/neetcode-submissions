class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans = nums[0], cc = 0, n = nums.size();

        for(int i = 0; i < n; i++) {
            if(ans == nums[i]) {
                cc++;
            }
            else if(cc == 0) {
                ans = nums[i];
                cc = 1;
            }
            else cc--;
        }

        return ans;
    }
};