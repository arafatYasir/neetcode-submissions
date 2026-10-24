class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int v1 = 0, v2 = 0, c1 = 0, c2 = 0;
        vector<int> ans;

        for(int n : nums) {
            if(n == v1) c1++;
            else if(n == v2) c2++;
            else if(c1 == 0) {
                v1 = n;
                c1 = 1;
            }
            else if(c2 == 0) {
                v2 = n;
                c2 = 1;
            }
            else {
                c1--;
                c2--;
            }
        }

        c1 = 0, c2 = 0;

        for(int n : nums) {
            if(n == v1) c1++;
            else if(n == v2) c2++;
        }

        if(c1 > nums.size() / 3) ans.push_back(v1);
        if(c2 > nums.size() / 3) ans.push_back(v2);

        return ans;
    }
};