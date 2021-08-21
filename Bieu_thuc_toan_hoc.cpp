#include<bits/stdc++.h>
#define ll long long
using namespace std;
int d;
vector<int> a(6);
void calculate(int type,int pos,ll cur_val){
    if(pos==6){
        if(cur_val==23){
            d = 1;
        }
        else return;
    }
    else{
        if(type==1) cur_val+=a[pos];
        if(type==2) cur_val-=a[pos];
        if(type==3) cur_val*=a[pos];
        calculate(1,pos+1,cur_val);
        calculate(2,pos+1,cur_val);
        calculate(3,pos+1,cur_val);
    }
}
void solve(int step){
    if(step==6){
        calculate(1,2,a[1]);
        calculate(2,2,a[1]);
        calculate(3,2,a[1]);
    }
    for(int i=step;i<=5;i++){
        swap(a[i],a[step]);
        solve(step+1);
        swap(a[i],a[step]);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        d = 0;
        for(int i=1;i<=5;i++) cin>>a[i];
        solve(1);
        cout<<(d?"YES":"NO")<<endl;
    }
}
