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

char special[] = {'#' , '@' , '*' , '&'};
bool isSpecialChar(char c){
    for(int i = 0; i < 4 ; i++){
        if(special[i] == c) return true; 
    }
    return false;
}

bool isLowercase(char c){
    return (c >= 97) && (c <= 122);
}

bool isUppercase(char c){
    return (c >= 65) && (c <= 90);
}

bool isNumero(char c){
    return (c >= 48 && c <= 57);
}


void solution() {
    bool isUpper, isLower, isSpecial , isNumber;
    int n; cin >> n; 
    string s; cin >> s;
    for(char c : s){
        if(!isUpper)    isUpper     = isUppercase(c);
        if(!isLower)    isLower     = isLowercase(c);
        if(!isSpecial)  isSpecial   = isSpecialChar(c);
        if(!isNumber)   isNumber    = isNumero(c); 
    }
    
    //cout << isUpper << " " << isLower << " " << isSpecial << " " << isNumber << " " << endl;
    if(!isUpper) s += 'A';
    if(!isLower) s += 'a';
    if(!isSpecial) s += '*';
    if(!isNumber) s += '1';

    while(s.size() < 7) s += '1';

    cout << s << endl; 
}


int main() {
    fastio;
    int t, n = 1;
    cin >> t;
    while(t--) {
        cout << "Case #" << n++ << ": "; 
        solution();
    }
    return 0;
}