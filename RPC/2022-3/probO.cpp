#include<bits/stdc++.h>
using namespace std;
#include<vector>
int main(){
    string s;
    cin>>s;
    bool ufound=false;
    int posu;
    int posf; 
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='U' && !ufound){
            posu=i;
            ufound=true;
        }else if(s[i]=='F'){
            posf=i;
        }
    }
    string res=""; 
    for (int i = 0; i < s.length(); i++)
    {
        if(i==posu){
            res+="U";
        }else if(i==posf){
            res+="F";
        }else if(i>posu && i<posf){
            res+="C";
        }else{
            res+="-";
        }
    }
    cout<<res<<endl;
    
}