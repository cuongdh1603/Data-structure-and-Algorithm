#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        vector<int> a,b;
        map<int,int> mpa,mpb;
        cin>>n>>m;
        a.resize(n);
        b.resize(m);
        for(int i=0;i<n;i++){
            cin>>a[i];
            mpa[a[i]]++;
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
            mpb[b[i]]++;
        }
        ll ans = (n-mpa[0])*mpb[0]+(n-mpa[1]-mpa[0])*mpb[1]+mpa[3]*mpb[2];
        for(auto[x,y]:mpb)
            if(x>4) ans += y * mpa[2];
        for(auto[x,y]:mpa){
            if(x>2){
                for(auto[z,w]:mpb)
                    if(x<z) ans += y*w;
            }
        }
        cout<<ans<<endl;
    }
}
