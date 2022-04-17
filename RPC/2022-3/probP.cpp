#include<bits/stdc++.h>
using namespace std;
#include <vector>
int main(){
    int a, b; 
    cin>>a>>b; 
    long long resa=0;
    long long resb=0;
    int count=0; 
    while(a>0)
    {
        resa+=(a%10);
        a=a/10;
        count++;
    }
    int count2=0;
    while (b>0)
    {
        resb+=(b%10);
        b=b/10;
        count2++;
    }
    resa=resa*count;
    resb=resb*count2;
    if(resa>resb){
        cout<<1<<endl;
    }else if(resa==resb){
        cout<<0<<endl;
    }else{
        cout<<2<<endl;
    }
}