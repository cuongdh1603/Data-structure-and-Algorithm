#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    vector<int> a;
    cin>>n;
    a.resize(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int c = 1;
    for(int i=0;i<n-1;i++){
        int p = i;
        for(int j=i;j<n;j++){
            if(a[p]>a[j]) p = j;
        }
        swap(a[p],a[i]);
        cout<<"Buoc "<<c++<<": ";
        for(int j=0;j<n;j++) cout<<a[j]<<' ';
        cout<<endl;
    }
}
