#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define endl "\n"
#define ll long long int
#define PI 3.1415926535897932384626
#define fo(i, n) for(i=0;i<n;i++)
#define deba(i, a, n) fo(i, n){cout << a[i] << " ";}
#define deb(x) cout << #x << " = " << x << endl;
#define deb2(x, y) cout << #x << " = " << x << ", " << #y << " = " << y << endl;
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, x) for(auto it = x.begin(); it != x.end(); it++)
#define trr(it, x) for(auto it = x.rbegin(); it != x.rend(); it+)
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

const int mod = 1'000'000'007;
const int N = 3e5;


ll solution(ll a, ll b) {
    
    if(a ==  b) return 0;

    vi nums = {1,2,5};

    ll dif = abs(a - b); 

    vector<ll> table(dif+1, INT_MAX);
    table[0] = 0;

    for(int i = 1; i <= dif; i++){
        for(int j = 0; j<3; j++){
            if(nums[j] <= i){
                table[i] = min(table[i], 1 + table[i-nums[j]]);
            }
        }
    }
    
    return table[dif];
}
int main() {

    fastio;
    ll t = 1;
    cin >> t;
    while(t--) {
        ll a, b;
        cin >> a >> b;
        cout << solution(a, b)<<endl;
    }
    return 0;
}