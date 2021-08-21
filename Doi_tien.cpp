#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll t[10];
void init(){
    t[0]=1;t[1]=2;t[2]=5;t[3]=10;t[4]=20;t[5]=50;t[6]=100;t[7]=200;t[8]=500;t[9]=1000;
}
int main(){
    init();
    int k;
    cin>>k;
    while(k--){
    ll s,dem = 0;int d;
    cin>>s;
    int lm = 9;
    while(s){
        d = 0;
        for(int i=lm;i>=0;i--){
            if(s>=t[i]){
                d = 1;
                lm = i;
                dem += s/t[i];
                s %= t[i];
                break;
            }
        }
    if(!d) break;
    }
    cout<<dem<<endl;
    }
}

