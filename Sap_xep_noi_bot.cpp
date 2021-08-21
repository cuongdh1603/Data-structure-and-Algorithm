#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> a;
int main(){
    cin>>n;
    a.resize(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int doSwap = 0,c = 1;
    for(int i=0;i<n-1;i++){
        doSwap = 0;
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                doSwap = 1;
            }
        }
        if(doSwap){
            cout<<"Buoc "<<c++<<": ";
            for(int j=0;j<n;j++) cout<<a[j]<<' ';
            cout<<endl;
        }
        else break;
    }
}
