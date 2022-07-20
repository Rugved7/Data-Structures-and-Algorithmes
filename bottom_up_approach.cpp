#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    // step 1 make array of n+1 size to store elements
    vector<int> dp(n+1);

    // step 2 ....> base case check karlo
    dp[1] = 1;
    dp[0] = 0;

// step 3
for (int i = 2; i <= n; i++)
    dp[i] = dp[i-1] + dp[i-2];

    cout<< dp[n] <<endl;

    return 0;

}