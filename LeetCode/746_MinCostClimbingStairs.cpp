#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
       int minCostClimbingStairs(vector<int>& cost){
           int n = cost.size();
           vector<int> ar(n+1, 0);
           ar[0] = 0; ar[1] = 0;
           for(int i = 2; i<= n ;++i){
               ar[i] = min(ar[i-1] + cost[i-1], ar[i-2] + cost[i-2]);
           }
           for(auto &c : ar) cout << c << " ";
           cout << endl; 
           return ar[n];
       }
};

int main(){

    Solution *res = new Solution();
    vector<int> ar = {1,100,1,1,1,100,1,1,100,1};
    res->minCostClimbingStairs(ar);

    return 0;
}