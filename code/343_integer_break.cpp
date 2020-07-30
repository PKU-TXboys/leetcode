class Solution {
public:
    int integerBreak(int n) {
        int dp[100] = {0};
        dp[1] = 1;
        dp[2] = 1;
        for(int i = 3; i <= n; i++)
        {
            int max_value = 0;
            for(int j = 1; j < i; j++)
            {
                max_value = max(max_value, j*dp[i-j]);
                max_value = max(max_value, j*(i-j));
            }
            dp[i] = max_value;
        }
        return dp[n];
    }
};