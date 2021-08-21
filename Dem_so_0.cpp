#include<bits/stdc++.h>
using namespace std;
short n;
vector<short> a;
int main(){
    short t;
    cin>>t;
    while(t--){
        cin>>n;
        a.resize(n);
        short dem = 0;
        for(short i=0;i<n;i++){
            cin>>a[i];
            if(!a[i]) dem++;
        }
        cout<<dem<<endl;
    }
}
