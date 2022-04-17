#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define endl "\n"
#define ll long long
#define PI 3.1415926535897932384626
#define deb(x) cout << #x << " = " << x << endl;
#define deb2(x, y) cout << #x << " = " << x << ", " << #y << " = " << y << endl;
#define pb push_back
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define FOR(i,n) for(int (i)=0;(i)<(n);++(i))
#define FOREACH(i,t) for (typeof(t.begin()) i=t.begin(); i!=t.end(); i++)
#define REP(i,a,b) for(int (i)=(a);(i)<=(b);++i)
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

void solution() {
    int l , r , a;
    cin >> l >> r >> a;
    int temp = r % a;
    if (temp == 0 && r-1 >= l){
        temp = (a-1) + (r-1)/a;
        temp = max(temp, r%a + r/a);
    }
    else if(temp > 0 && r-(r%a)-1 >= l && temp != a - 1){
        temp = (a - 1) + ((r-(r%a)-1)/a); 
        temp = max(temp, r%a + r/a);
    }
    else{
        temp += r/a; 
    }
    cout << temp << endl;
}
int main() {
    fastio;
    int t ;
    cin >> t;
    while(t--) {
        solution();
    }
    return 0;
}