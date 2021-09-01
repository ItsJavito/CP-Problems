#include <bits/stdc++.h>

using namespace std; 

int getTotalX(vector<int> a, vector<int> b)
{
    int inicio = a[a.size()-1];
    int fin = b[0];
    int ans = 0 ;
    
    for (int i = inicio; i <= fin; i++)
    {
        int cont = 0 ;
        for (int j = 0; j < b.size(); j++) if (b[j]%i == 0) cont++;
        for (int j = 0; j< a.size(); j++) if (i%a[j] == 0)cont ++;
        if (cont == b.size() + a.size()) {
            cout << i << endl;
            ans++;
        }
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    vector<int> a = {2,4};
    vector<int> b = {16,32,96};
    int ans = getTotalX(a,b);
    cout << ans << endl;
    return 0;
}
