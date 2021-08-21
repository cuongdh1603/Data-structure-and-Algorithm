#include<bits/stdc++.h>
using namespace std;
vector<int> ck(1005,-1);
vector<int> coins;
int Count(int amount,vector<int> coins,int x){
    if(amount==0) return 1;
    if(amount<0 || coins.size()==0) return 0;
    if(ck[x]==-1){
        vector<int> tmp = coins;
        tmp.erase(tmp.end()-1);
        ck[x] = Count(amount-coins[coins.size()-1],coins,x) + Count(amount,tmp,x-1);
        //ck[x] = -1;
    }
    return ck[x];
}
int main(){
    int amount,k;
    cin>>amount>>k;
    for(int i=0;i<k;i++){
        int x;
        cin>>x;
        coins.push_back(x);
    }
    cout<<Count(amount,coins,k)<<endl;
}
