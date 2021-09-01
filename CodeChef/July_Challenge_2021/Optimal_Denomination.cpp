#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define endl "\n"
#define ll long long
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

int a[N],f[N],b[N]; //lo declaramos como variables globales 


void gcdc(int n)
{
    f[1]=a[1]; b[n]=a[n];
    for(int i=n-1;i>0;i--)
    {
       b[i]=__gcd(b[i+1],a[i]);
    }
    for(int i=2;i<n+1;i++)
    {
       f[i]=__gcd(f[i-1],a[i]);
    }
}

int main() {
    fastio;
	int t;
	cin>>t;
	while(t--)
	{
	    int n , sum = 0 , ans = 0;
	    cin>>n;
	    for(int i=1;i<n+1;++i) cin>>a[i];
	
	    sort(a,a+n+1);
	    gcdc(n);

	    for(int i=1;i<n+1;i++) sum+=a[i];
	    int res= INT_MAX;

        for(int i=1;i<n+1;i++)
        {
            ans=(sum-a[i]+__gcd(f[i-1],b[i+1]))/__gcd(f[i-1],b[i+1]);
            if(ans<res)
            res =ans;
        }
	    cout<<res << endl ;
	}
	return 0;
}