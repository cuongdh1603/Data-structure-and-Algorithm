//please do it myself!!!!!!!



















#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x,max_value = 0;
    cin>>n;
    vector<int> a;
    a.resize(n+1);
    for(int i=0;i<n;i++)
    {
        cin>>x;
        a[x] = a[x-1] + 1;
        max_value = max(max_value,a[x]);
    }
    cout<<n-max_value<<endl;
}
