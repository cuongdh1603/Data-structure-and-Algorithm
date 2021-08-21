#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    vector<int> a;
    cin>>n;
    a.resize(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int d = 0,c = 1;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]) swap(a[i],a[j]);
        }
        cout<<"Buoc "<<c++<<": ";
        for(int j=0;j<n;j++) cout<<a[j]<<' ';
        cout<<endl;
    }
}
