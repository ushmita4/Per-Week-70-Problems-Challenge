class Solution 
{
public:
    bool isMatch(string s, string p) 
    {
        int slen = s.length(), plen = p.length();
        vector<vector<bool>> dp(slen + 1, vector<bool>(plen + 1, false));
        dp[0][0] = true;
        // Note that s = "", can match p = "a*b*c*", hence `i` should be start with 0
        for (int i = 0; i <= slen; ++i)
        {
            for (int j = 1; j <= plen; ++j)
            {
                /* the index of '*' in `p`, must be >= 1, otherwise `p` is invalid,
                 * i.e. (j - 1 >= 1) ==> (j >= 2)
                 */
                if (p[j - 1] == '*')
                {
                    dp[i][j] = dp[i][j -  2] || 
                               (i > 0 && dp[i - 1][j] && (s[i - 1] == p[j - 2] || p[j - 2] == '.'));
                }
                else if (i > 0 && (p[j - 1] == '.' || s[i - 1] == p[j - 1]))
                {
                    dp[i][j] = dp[i - 1][j - 1];
                }
                
            }
        }
        return dp[slen][plen];
    }
};
