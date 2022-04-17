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

// U R L D 
int dx[4] = {0 , 1 , -1, 0};
int dy[4] = {-1 , 0 , 0, 1}; 
char inst[4] = {'U' , 'R' , 'L' , 'D'};

void solution() {
    int R , C; cin >> R >> C; 
    int posx , posy; 
    queue<pair<pair<int,int> , string>> q;
    vector<vector<char>> grid(R, vector<char> (C));
    vvi visited (R , vector<int> (C));

    for(int i = 0; i < R ; i++){
        for(int j = 0; j < C; j++){
            cin >> grid[i][j];
            if(grid[i][j] == 'S'){
                posy = i;
                posx = j;
            }
        }
    }

    q.push({{posx, posy} , ""});
    visited[posy][posx] = 1; 
    while(!q.empty()){
        auto u = q.front(); q.pop();
        int x = u.F.F; //j
        int y = u.F.S; //i
        
        if(grid[y][x] == 'X'){
            cout << u.S << endl;
            return;
        }

        for(int i = 0; i < 4; i++){
            if(x + dx[i] >= 0 && x + dx[i] < C 
            && y + dy[i] >= 0 && y + dy[i] < R 
            && grid[y][x] != '#' && !visited[y + dy[i]][x + dx[i]])
            {
                q.push({{x + dx[i] , y + dy[i]} , u.S + inst[i]});
                visited[y][x] = 1; 
            }
        }
    }
    cout << "No exit" << endl; 
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