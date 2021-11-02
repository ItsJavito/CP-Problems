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

vector<int> ar; 

int calculation(string s){
    int ans = 0; 
    bool negative = false;
    string num = "";
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '-') {
            negative = true;
        } 

        if(s[i] >= '0' && s[i] <= '9'){
            int fpos = i;
            num = "";
            for(int j = fpos; j < fpos + 5; j++){
                if(s[j] >= '0' && s[j] <= '9'){
                    num += s[j];
                    i++; 
                }
                else break; 
            }
            int val = stoi(num);
            if(negative){
                val = val * -1;
                negative = false;
            }

            ar.push_back(val); 
            i--;
            continue;
        }

        if(s[i] == '*'){
            int fpos = i + 1;
            num = "";
            for(int j = fpos; j < fpos + 5 && j < s.size() ; j++){
                if(s[j] >= '0' && s[j] <= '9'){
                    num += s[j];
                    i++; 
                }
                else break; 
            }
            if(num != ""){
                ar[ar.size() - 1] *= stoi(num);
            }
        }
    }
    for(auto &c: ar){
        ans += c % mod; 
    }
    return ans;
}

void resolve(string s){

    //verificamos que tiene parentesis
    bool pare = false; 
    stack<int> st; 
    for(int i = 0; i < s.size() ; i++){
        if(s[i] == '('){
            if(st.empty()){
                st.push(i); 
            }
            bool pare = true ; 
            continue; 
        }
        if(s[i] == ')'){
            resolve(s.substr(st.top(), i - st.top() + 1));
            st.pop();
        }
    }
    //si no tiene parentesis
    if(!pare){
        calculation(s);
    }
}


void solution() {
    string s; cin >> s;

    if(s[0] == '*' || s[0] == '-' || s[0] == '+'){
        cout << "invalid" << endl; 
        return;
    }
    else if(s[s.size()-1] == '*' || s[s.size()-1] == '-' || s[s.size()-1] == '+'){
        cout << "invalid" << endl;
        return;
    }
    else{
        for(int i = 1; i < s.size()-1; i++){
            if(s[i] == '*' || s[i] == '-' || s[i] == '+'){
                if(s[i-1] == '*' || s[i-1] == '-' || s[i-1] == '+'){
                    cout << "invalid" << endl; return; 
                }
                else if(s[i+1] == '*' || s[i+1] == '-' || s[i+1] == '+'){
                    cout << "invalid" << endl; return; 
                }
            }
        }
    }

    int ans = calculation(s);
    int cantSim = 0;
    for(auto &c: s){
        if(c == '+' || c == '-'){
            cantSim++;
        }
    }
    
    //cout << cantSim + 1  <<  " " <<  ar.size();
    if(cantSim + 1 == ar.size()){
        cout << (ans + mod)%mod << endl;
    }
    else cout << "invalid" << endl;
    ar.clear();
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