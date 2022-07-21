/*class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        // regarding state variables and dp
        // dp(i) be the minimum cost necessary to reach step i
        int dp[n+1];
        // base cases
        // Since we can start from either step 0 or step 1, the cost to reach these steps is 0.
        dp[0] = 0;
        dp[1] = 0;
        for(int i = 2 ; i <= n ; i++){
            // recurrence relation
            // We can arrive at step i from either step i - 1 or step i - 2. Choose whichever one is cheaper.
            dp[i] = min(dp[i-2] + cost[i-2],dp[i-1] +cost[i-1]);
        }
        return dp[n];
    }
};*/