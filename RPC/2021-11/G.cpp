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

vector<string> get_dir(string s){
    vector<string> res;
    string temp = ""; 
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '/'){
            res.pb(temp);
            temp = "";
            continue; 
        }
        temp += s[i];
    }
    res.pb(temp);

    return res; 
}

int main() {
    fastio;
    string src, dst , temp1 , temp2 , temp3;
    vector<string> dir_src;
    vector<string> dir_dist;
    vector<string> rep;  
    getline(cin , src); 
    getline(cin , dst); 

    dir_src = get_dir(src);
    dir_dist = get_dir(dst);
    int count = 0;
    while(dir_src[count] == dir_dist[count]) count++; 
    for(int i = count; i < dir_src.size() - 1; i++){
        if(i != dir_src.size()-2) temp1 += dir_src[i] + '/';
        else temp1 += dir_src[i];
    }
    for(int i = count; i < dir_dist.size() - 1; i++){
        if(i != dir_dist.size()-2) temp2 += dir_dist[i] + '/';
        else temp2 += dir_dist[i];
    }

    for(int i = 0; i < count ; i++){
        temp3 += dir_src[i] + '/';
    }

    cout << temp3 << "{" << temp1 << " => " << temp2 << "}" << "/" << dir_src[dir_src.size() - 1] << endl; 

    return 0;
}