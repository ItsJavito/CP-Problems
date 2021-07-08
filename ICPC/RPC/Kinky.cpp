#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
int c, r;
pair<int, int> buscarDesde(int posi, int posj, vector<vector <char>> &ar, char letra){
    for(int i = posi; i < c; i++){
        for(int j = posj ; j < r; j++)
        {
            if(letra == ar[i][j])
            return pair<int, int> (i,j);
        }
    }
    return nullptr;
}

void solve(string word, vector<vector<char>> &table, int kinks)
{
    pair<int, int> pos = buscarDesde(0,0, table, word[0]);

    

}


int main()
{
    fastio;
    string word; 
    int  kinks;
    cin >> c >> r;
    vector<vector <char>> table(c , vector<char> (r,0));

    for(int i = 0; i<c; i++){
        for(int j = 0; j<r ; j++){
            cin >> table[i][j];
        }
    }
    cin >> kinks;
    cin >> word; 
   /*  for(int i = 0; i<c; i++){
        for(int j = 0; j<r ; j++){
            cout << table[i][j] << " ";
        }
        cout << endl;
    }
    cout << kinks << endl << word << endl;
 */
    solve(word, table, kinks);

    return 0;
}