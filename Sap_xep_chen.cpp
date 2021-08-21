#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c = 0;
    vector<int> a,b;
    cin>>n;
    a.resize(n);
    b.resize(n);
    for(int i=0;i<n;i++) cin>>a[i];
    b[0] = a[0];
    cout<<"Buoc "<<c++<<": "<<a[0]<<endl;
    for(int i=1;i<n;i++){
        int key = a[i],k = i-1;
        while(k>=0&&b[k]>a[i]){
            b[k+1] = b[k];
            k--;
        }
        b[k+1] = a[i];
        cout<<"Buoc "<<c++<<": ";
        for(int j=0;j<=i;j++) cout<<b[j]<<' ';
        cout<<endl;
    }
}
