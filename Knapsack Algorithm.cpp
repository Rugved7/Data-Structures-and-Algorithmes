// int Solve(vector<int> &weight, vector<int> &value, int index, int W){
 
//      // Base case

//     if(index==0){
//         if(weight[0]<=W)
//             return value[0];
//     else
//         return 0;
// }
// // recurssive relation

// int include = 0;
// if(weight[index] <= W)
//     include=value[index] + Solve(weight,value,index-1,W-weight[index]);

// int exclude = 0 + Solve(weight,value,index-1,W);

// int ans = max(include,exclude);
// return ans;
// }

// int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
// {
// 	// Write your code here
//     return Solve(weight,value,n-1,maxWeight);
// }


// //<------------------------------------------------- Dynamic Programming  Solution ----------------------------------------------->


//  Dynamic Solution
// int SolveMem(vector<int> &weight, vector<int> &value, int index, int W ,vector<vector<int> >&dp){
 
//     //  Base case
//     if(index==0){
//         if(weight[0]<=W)
//             return value[0];
//     else
//         return 0;
// }
//     if(dp[index][W] != -1)
//         return dp[index][W];
    
// // recurssive relation
// int include = 0;
// if(weight[index] <= W)
//     include=value[index] + SolveMem(weight,value,index-1,W-weight[index],dp);

// int exclude = 0 + SolveMem(weight,value,index-1,W,dp);

// //      step 2
// dp[index][W]=max(include,exclude);
// return dp[index][W];
// }
 
// int knapsack(vector<int> weight, vector<int> value, int n, int W)
// {

// //     step 1 ...Makw 2D DP
//     vector<vector<int>> dp(n,vector<int>(W+1,-1));
//       return SolveMem(weight,value,n-1,W,dp);
// }