class Solution {
public:
    bool isAlphaNum(char ch) {
        return (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9');
    }

    bool isPalindrome(string s) {
        int l = 0, r = s.size() - 1;

        while(l < r) {
            while(l < r && !isAlphaNum(tolower(s[l]))) l++;
            while(l < r && !isAlphaNum(tolower(s[r]))) r--;

            if(tolower(s[l]) != tolower(s[r])) return false;

            l++;
            r--;
        }

        return true;
    }
};
