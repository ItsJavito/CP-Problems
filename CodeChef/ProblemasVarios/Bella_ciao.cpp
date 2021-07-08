#include<iostream>
using namespace std;

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define endl "\n"
typedef long long int ll;

ll solution(ll D, ll d, ll p, ll Q) 
{
    return D*p + d*((D/d)-1)*(D/d)*Q/2 + (D%d)*(D/d)*Q; 
}

int main() {

    fastio;
    ll t = 1;
    cin >> t;
    while(t--) {
        ll D, d, p, Q;
        cin >> D >> d >> p >> Q;
        cout << solution(D, d, p, Q) << endl;;
    }
    return 0;
}