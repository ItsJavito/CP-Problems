#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;



int main()
{
    fastio;
    map<char, int>  abc = {{'A', 0}, {'B', 1},{'C', 2},{'D', 3}, {'E', 4} , {'F', 5}, {'G', 6}, {'H', 7}};
    int table[8][8] = {};
    int n;
    cin >> n;
    
    while(n--)
    {
        string pieza, color, pos;
        cin >> pieza >> color >> pos;

        char letra = pos[0];
        int num = pos[1] - '0';

        if(color == "blanco")
        {
            if(pieza == "Rey")
            {
                table[abc[letra]][num-1] = 1;
            }
            else if(pieza == "Alfil")
            {
                table[abc[letra]][num-1] = 2;
            }
        }else if(color == "negro")
        {
            if(pieza == "Rey")
            {
                table[abc[letra]][num-1] = -1;
            }else if (pieza == "Alfil")
            {
                table[abc[letra]][num-1] = -2;
            }
        }
    }
 
     for(int i = 0; i<8; i++){
        for(int j = 0; j <8 ; j++){
            if(table[i][j] == -2)
            {
                int k = 1 ;
                while(i+k < 8 && j + k < 8){
                    if(table[i+k][j+k] == 1){
                        cout << "Si";
                        return 0;
                    }
                    k++;
                }
                k = 1;
                while(i-k >= 0 && j-k >= 0){
                    if(table[i-k][j-k] == 1){
                        cout << "Si";
                        return 0;
                    }
                    k++;
                }
                k = 1;
                while(i+k <8 && j-k >= 0){
                    if(table[i+k][j-k] == 1){
                        cout << "Si";
                        return 0;
                    }
                    k++;
                }
                k = 1;
                while(i-k >= 0 && j+k < 8){
                    if(table[i+k][j-k] == 1){
                        cout << "Si";
                        return 0;
                    }
                    k++;
                }
            }
            else if(table [i][j] == 1)
            {
                if(table[i-1][j] == -1 || table[i][j-1] == -1 || table[i-1][j-1] == -1){
                    cout <<"Si";
                    return 0;
                }
                if(table[i+1][j] == -1 || table[i][j+1] == -1 || table[i+1][j+1] == -1){
                    cout << "Si";
                    return 0;
                }
                if(table[i+1][j-1] == -1 || table[i-1][j+1] == -1 ){
                    cout << "Si";
                    return 0;
                }
            }
        }
    }
    cout << "No";  
    return 0;
}   