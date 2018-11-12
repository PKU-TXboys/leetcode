class Solution {
public:
    bool isPalindrome(int x) {
        int xx = x;
        if(x < 0)
        {
            return false;
        }
        int result = 0;
        long long cmp = 0;
        int neg = 1;
        
        while(x != 0)
        {
            result = result * 10 + x % 10;
            cmp = cmp * 10 + x % 10;
            x = x / 10;
            //printf("%d,%d,%d\n", result, x, cmp);
        }
        if(cmp != xx)
            return false;
        else
            return true;
    }
};
