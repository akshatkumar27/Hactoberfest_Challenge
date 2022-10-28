// PROBLEM
// You are given an integer array coins representing coins of different denominations and an integer amount representing a total amount of money.
// Return the fewest number of coins that you need to make up that amount. If that amount of money cannot be made up by any combination of the coins, return -1.
// You may assume that you have an infinite number of each kind of coin.

// SOLUTION
class Solution
{
public:
    int coinChange(vector<int> &coins, int amount)
    {
        if (amount == 0)
            return 0;
        sort(coins.begin(), coins.end());
        vector<int> dp(amount + 1, INT_MAX - 1);
        for (int i = 0; i < coins.size(); i++)
            if (coins[i] <= amount)
                dp[coins[i]] = 1;

        for (int i = 1; i <= amount; i++)
            if (dp[i] != 1)
                for (int j = 0; j < coins.size() && (i >= coins[j]) && coins[j] <= amount; j++)
                    dp[i] = min(dp[i], 1 + dp[i - coins[j]]);

        return dp[amount] >= (INT_MAX - 1) ? -1 : dp[amount];
    }
};