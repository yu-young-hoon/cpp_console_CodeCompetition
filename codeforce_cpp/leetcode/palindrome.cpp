class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        
        int pa = 1;
        for (; x / pa >= 10 ;) {
            pa *= 10;
        }
        
        for (int i = 1 ; i < pa ;i *= 10, pa /=10) {
            if ((x / pa % 10) != (x / i % 10)) {
                return false;
            }
        }
        return true;
    }
};