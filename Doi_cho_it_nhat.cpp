#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> a;
int main(){
    int t;
    cin>>t;
    while(t--){
        int ans = 0;
        cin>>n;
        a.resize(n);
        for(auto &i:a) cin>>i;
        for(int i=0;i<n-1;i++){
            int vmin = a[i];
            int pmin = i;
            for(int j=i+1;j<n;j++){
                if(vmin>a[j]){
                    vmin = a[j];
                    pmin = j;
                }
            }
            if(pmin!=i){
                ans++;
                swap(a[i],a[pmin]);
            }
        }
        //p.clear();
        /*
        p.resize(n);
        visit.resize(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            visit[i] = false;
            p[i].val = a[i];
            p[i].id = i;
        }
        sort(p.begin(),p.end(),cmp);
        for(int i=0;i<n;i++){
            if(i==p[i].id) continue;
            else {
                swap(p[i].val,p[p[i].id].val);
                swap(p[i].id,p[p[i].id].id);
            }
            if(i!=p[i].id) i--;
            ans++;
        }
        */
        cout<<ans<<endl;
    }
}
