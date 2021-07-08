#include<bits/stdc++.h>

using namespace std;

const int mod = 1'000'000'007;
const int N = 3e5;

int main() {

    stack<char> pila; //pila para acumular los parentesis 
    string s = "(()())(())(()(()))";
    string ans = "";
    for(auto &a : s){
        if(a == '('){
            if(pila.size() >= 1){ //si la pila tiene por lo menos un '('
                ans.push_back(a); //lo añadimos al string 
            }
            pila.push(a); //de todas maneras insertamos el '('
        }
        else if(a == ')'){
            if(pila.size() > 1) // si se tiene 2 o más en la pila 
                                //es decir que está dentro de un parentesis grande
            {
                ans.push_back(a); //insertamos el ')' en el ans
            }
            pila.pop(); //quitamos un '(' porque un parentesis ya está hecho
        }
    }
    cout << ans; 
    return 0;
}