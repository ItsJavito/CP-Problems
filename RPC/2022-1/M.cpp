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


vector<int> primes;
vector<bool> bs;

bool is_number(const std::string& s)
{
    return !s.empty() && std::find_if(s.begin(), 
        s.end(), [](unsigned char c) { return !std::isdigit(c); }) == s.end();
}


bool check(int a, int b, int c){
    return (a > 3 && a < 10e9 && a%2 == 0 && b > 0 && c > 0);
}

int main() {
    fastio;
    string s; 
    vector<string> ar;
    while(cin >> s) 
        ar.pb(s);

    if(ar.size() > 3 || ar.size() < 3){
        cout << 0 << endl;
        return 0;
    }

    if(!(is_number(ar[0]) && is_number(ar[1]) && is_number(ar[2]))){
        cout << 0 << endl;
        return 0; 
    }

    if(check(stoi(ar[0]) , stoi(ar[1]) , stoi(ar[2]))){
        cout << 1 << endl;
    }else
        cout << 0 << endl; 

    return 0;
}