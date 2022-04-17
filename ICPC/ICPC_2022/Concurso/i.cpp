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
string s; int n, pos;
string ar[7] = {"Mon" , "Tue", "Wed", "Thu" , "Fri" , "Sat" , "Sun"}; 

int posWeek(string s){
    for(int i = 0; i < 7; i++){
        if(s == ar[i]){
            return i+1;
        }
    }
    return -1; 
}

int res(int num){
    
}

int main() {
    fastio;
    cin >> s >> n;
    vi ar(n); 
    pos = posWeek(s);
    for(auto &c : ar){
        int num; cin >> num;
        c = res(num);
    }

    cout << *min_element(ar.begin() , ar.end()) << endl; 
    return 0;
}