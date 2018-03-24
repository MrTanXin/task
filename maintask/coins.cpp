
#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

int coinCombinations(int coins[], int coinKinds, int sum)
 {
     vector<vector<int> > dp(coinKinds + 1);
     for (int i = 0; i <= coinKinds; ++i)
     {
         dp[i].resize(sum + 1);
     }
     for (int i = 0; i <= coinKinds; ++i)
     {
         for (int j = 0; j <= sum; ++j)
         {
             dp[i][j] = 0;
         }
     } 

     for (int i = 0; i <= coinKinds; ++i)
     {
         dp[i][0] = 1;
     }
 
     for (int i = 1; i <= coinKinds; ++i)
     {
         for (int j = 1; j <= sum; ++j)
         {
             dp[i][j] = 0;
             for (int k = 0; k <= j / coins[i-1]; ++k)
             {
                 dp[i][j] += dp[i-1][j - k * coins[i-1]];
             }
         }
     }
 
     return dp[coinKinds][sum];
 }

int main()
 {
     int coins[4] = {10, 20, 50, 100};
     int sum = 1000;
     int result = coinCombinations(coins, 4, 1000);
     cout << "using 4 kinds of coins construct 1000, combinations are: " << endl;
     cout << result << endl;
     return 0;
 }
