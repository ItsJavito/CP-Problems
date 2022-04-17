#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, fix;
    cin>>n>>fix;
    int uno=0;
    int dos=0;
    for (int i = 0; i < n; i++)
    {
        int act;
        cin>>act;
        if((act*2)>(act+fix)){
            dos++;
        }else if((act*2)<(act+fix)){
            uno++;
        }
    }
    if(uno>dos){
        cout<<1<<endl;
    }else if(uno==dos){
        cout<<0<<endl;
    }else{
        cout<<2<<endl;
    }
    
}