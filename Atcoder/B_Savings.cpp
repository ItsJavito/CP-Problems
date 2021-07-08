#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, calc = 1; 
    cin >> n;
    for(int i = 1; calc < n; i++){
        calc = (i)*(i+1)/2;
        if(calc >= n) {
            cout << i;
            return 0;
        } 
    }
}