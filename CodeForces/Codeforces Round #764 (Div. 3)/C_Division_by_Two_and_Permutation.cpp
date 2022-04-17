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
    int n; cin >> n;
    // vs = visited
    vi ar(n) , vs(n+1, 0);
    for (auto &c : ar)
        cin >> c;
    sortall(ar);
    for(int i = 0; i < n ; i++){
        // el bucle while hasta que ar[i] sea menor que n
        // o si en vs ya se ha pasado por ese número  
        while (ar[i] > 1 && (ar[i] > n || vs[ar[i]]))
            ar[i] /= 2;
        // en caso de que vs[ar[i]] exista, quiere decir que se está repitiendo un numero 
        // por lo que no se puede hacer una permutación con el arreglo
        if(vs[ar[i]]){
            cout << "NO" << endl;
            return;
        }
        //en caso de que no se repita el numero, lo marcamos. 
        vs[ar[i]]++;
    }
    //como no se repitió ningun numero entonces se ha logrado hacer la permutacion
    cout << "YES" << endl; 
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
