class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        bool flag;
        for (int i=0;i<s.size()/2;i++) {
            if (s[i] != s[s.size()-1 - i]) {
                return false;
            }
        }
        return true;
    }
};
