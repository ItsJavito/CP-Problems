#include <iostream>
#include <vector>
#include <string>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
using namespace std;

int main()
{
    
    int a;
    string line;
    vector<int> vectores; 
    cin >> a;
    cin.ignore();

    vector<vector<int>> table(a, vector<int> (a,0));
    
    for(int i = 0; i < a; i++){
        for(int j = 0; j < a; j++){
            cin >> table[i][j];
            cin.ignore();
        }
    }

    getline(cin, line);

    for(auto &c : line)
    {
        if(c == ' '){
            vectores.push_back(36);
            continue;
        }
        int num = c - '0';
        if(num >= 0 && num <= 9){
            vectores.push_back(26 + num);
        }else{
            vectores.push_back(num-17);
        }
    }
    vector<int> ans;
    vector<int> vec;


    //for (auto &c : vectores) cout << c << " " ; 
    for(auto &c : vectores){
        vec.push_back(c);
        if(vec.size() == a){
            for(int i = 0; i<a ; i++){
                int suma = 0;
                for(int j = 0; j<a; j++)
                {
                    suma += table[i][j] * vec[j];
                }
                ans.push_back(suma%37);
            }
            vec.clear();
        }
    }


    if(!vec.empty() && vec.size() < a){
        while(vec.size() < a){
            vec.push_back(36);
        }
        for(int i = 0; i < a ; i++){
            int suma = 0; 
            for(int j = 0; j < a; j++){
                suma += table[i][j] * vec[j];
            }
            ans.push_back(suma%37);
        }
        vec.clear();
    }

    string resp;
    for(auto &c : ans){
        if(c + 65 == 91){
            resp.push_back('0');
            continue;
        }
        if(c == 36){
            resp.push_back(' ');
            continue;
        }
        if(c>= 27 && c <= 35)
        {
            resp.push_back(char(c-27 + 49));
        }
        else{
            resp.push_back(char(c + 65));
            continue;
        }
    }

    cout << resp << endl; 

    return 0;
}