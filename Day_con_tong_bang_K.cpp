#include<bits/stdc++.h>
using namespace std;
int n,k,d;
vector<int> a;
void solve(vector<int> &v,int p,int x){
    if(x==k){
        d++;
        cout<<'[';
        for(int i=0;i<v.size();i++){
            if(i==v.size()-1) cout<<v[i]<<']'<<' ';
            else cout<<v[i]<<' ';
        }
        return;
    }
    //v.push_back(a[p]);
    for(int i=p+1;i<n;i++){
        if(x+a[i]<=k){
            v.push_back(a[i]);
            solve(v,i,x+a[i]);
            v.pop_back();
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        d = 0;
        cin>>n>>k;
        a.resize(n);
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++){
            vector<int> v;
            if(a[i]<=k){
                v.push_back(a[i]);
                solve(v,i,a[i]);
                v.pop_back();
            }
        }
        if(!d) cout<<-1;
        cout<<endl;
    }
}
