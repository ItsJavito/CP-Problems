#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
       int minPathSum(vector<vector<int>>& grid){
           int row = grid.size(); int column = grid[0].size();
           vector<vector<int>> dp(row+1, vector<int>(column+1, INT_MAX));
           dp[1][1] = grid[0][0];
           for(int i=0; i < row; ++i){
               for(int j=0; j<column;++j){
                   if(i==0 && j==0) continue;
                   dp[i+1][j+1] = min(dp[i+1][j] , dp[i][j+1])+ grid[i][j];
               }
           }
           return dp[row][column];
       }
};

int main(){

    Solution *res = new Solution();

    return 0;
}