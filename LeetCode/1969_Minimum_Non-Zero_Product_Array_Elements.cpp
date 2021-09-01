#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1'000'000'007;

class Solution{
    public:

       ll modpow(ll x, ll e) {
       if (e == 0) return 1;
       ll a = modpow(x, e >> 1);
       a = a * a % mod;
       if (e & 1) a = a * x % mod;
       return a;
       }
       int minNonZeroProduct(int p){
            int num = modpow(2, p);
            int ans = modpow(num-2, ((num-2)/2))*(num-1);
            return ans; 
       }
};

int main(){

    Solution *res = new Solution();
    cout << res->minNonZeroProduct(3) << endl;
    return 0;
}