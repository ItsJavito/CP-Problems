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
//retoran true en caso de que sea substring
bool isSubs(string subs, string s){
    return (s.find(subs) != string::npos); 
}

// chequea dentro del arreglo 
bool check(vector<string> &ar, string subs){
    for(auto &c: ar){
        if(!isSubs(subs, c)){
            return false;
        }
    }
    return true;
}

int main() {
    fastio;
    int n , res = 0; cin >> n;
    vector<string> ar(n);
    for(auto &c: ar){
        cin >> c;
    }
    sort(ar.begin(), ar.end(), [](const string &a ,const string &b){
        return a.size() < b.size();
    });
    //declaramos un tam maximo
    int tamMax = ar[0].size();
    //declaramos el string mas pequenio
    string fString = ar[0];

    for(int tam = 0; tam < tamMax; tam++){
        //recorremos el el string mas pequeño
        for(int i = 0; i <= fString.size() - tam; i++){
            string temp = fString.substr(i , tam);
            //recorremos el arreglo de strings
            if (check(ar , temp)){
                res = temp.size(); 
            }
        }
    }
    //si el menor string esta contenido en los otros strings mas grandes
    if(check(ar, fString)){
        res = fString.size();
    }
    cout << res << endl; 
    return 0;
}