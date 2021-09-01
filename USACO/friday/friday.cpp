/*
ID: javiere1
PROG: friday
LANG: C++                  
*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void setIO(string s) {
    ios_base::sync_with_stdio(0); cin.tie(0); 
    freopen((s + ".in").c_str(), "r", stdin);freopen((s + ".out").c_str(), "w", stdout);
}

int main() {
    setIO("friday");
    vector<int> meses = {31,28,31,30,31,30,31,31,30,31,30,31};
    vector<int> semana(7,0); // sab dom lun mar mier jue vie
    //en el año 1900 en el mes de enero el dia 13 cae el sabado
    int dia = 0;
    int N;    
    cin >> N;

    //para cada año desde 1900 hasta 1900+N-1
    for(int i = 1900; i < 1900 + N; i++){
        //para ver si es año bisisesto o no 
        if(i%400 == 0 || (i%4 == 0 && i%100 != 0)) meses[1] = 29;
        else meses[1] = 28; 
        for(int j = 0; j < 12 ; ++j){
            semana[dia]++;
            dia += meses[j];
            dia %= 7;
        }
    }

    for(int i = 0; i < 6 ; ++i){
        cout << semana[i] << " ";
    }
    cout << semana[6] << endl;

}