int minCoins(int coins[], int M, int V) 
{ 
    // Your code goes here
    int dp[V+1];
    dp[0] = 0;
    for (int i = 1; i <= V; i++)
        dp[i] = INT_MAX;
       
       for (int i = 1; i <= V; i++){
           for (int j = 0; j < M; j++){
               if (coins[j] <= i){
                   int sub_res = dp[i-coins[j]];
                   if (sub_res != INT_MAX){
                       dp[i] = min(dp[i], sub_res+1);
                   }
               }
           }
       }
       if (dp[V] != INT_MAX)
           return dp[V];
       else
           return -1;
}
