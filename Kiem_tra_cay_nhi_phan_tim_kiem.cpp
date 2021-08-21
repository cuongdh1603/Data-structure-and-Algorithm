#include<bits/stdc++.h>
using namespace std;
vector<int> a;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,check = 1;
        cin>>n;
        a.resize(n);
        for(auto &i:a) cin>>i;
        for(int i=1;i<n;i++){
            if(a[i]<=a[i-1]){
                check = 0;
                break;
            }
        }
        cout<<check<<endl;
    }
}
/*
3
5
10 20 30 40 50
6
90 80 100 70 40 30
3
1 1 2
*/
