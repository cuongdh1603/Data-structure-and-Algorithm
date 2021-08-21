#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s,m;
        cin>>n>>s>>m;
        vector<bool> buy;
        //vector<int> consume;
        buy.resize(s+1,false);
        int ans = 0,amount = 0,d = 1;
        for(int i=1;i<=s;i++){
            if(amount<m&&i%7!=0){
                amount += n;
                buy[i] = true;
            }
            amount -= m;
            if(amount<0){
                for(int j=i-1;j>0;j--){
                    if(!buy[j]&&j%7!=0){
                        buy[j] = true;
                        amount += n;
                    }
                    if(amount>=0) break;
                }
                if(amount<0){
                    d = 0;
                    break;
                }
            }
        }
        for(int i=1;i<=s;i++)
            if(buy[i]) ans++;
        cout<<(d?ans:-1)<<endl;
    }
}
