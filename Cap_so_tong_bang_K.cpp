#include<bits/stdc++.h>
using namespace std;
vector<int> a;
int n,k;
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        a.resize(n);
        map<int,int> mp;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        int ans = 0;
        for(auto[x,y]:mp){
            if(mp[k-x]&&k!=x*2){
                ans += y*mp[k-x];
                mp[k-x] = 0;
            }
            else if(mp[k-x]>=2&&k==x*2) ans += (y-1)*y/2;
        }
        cout<<ans<<endl;
    }
}
