class Solution {
  public:
    int minCostClimbingStairs(vector<int>&cost ,int N) {
        //Write your code here
        int dp[N];
        if(N==1){
            return cost[0];
        }
        dp[0]=cost[0];
        dp[1]=cost[1];
        
        for(int i=2;i<N;i++){
            dp[i] = cost[i] + min(dp[i-1],dp[i-2]);
        }
        return min(dp[N-1],dp[N-2]);
    }
};
