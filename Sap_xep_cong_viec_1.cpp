#include<bits/stdc++.h>
using namespace std;
struct job{
    int st;
    int fi;
};
vector<job> a;
bool cmp(job x,job y){
    return x.fi<y.fi||(x.fi==y.fi&&x.st<y.st);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,dem = 1;
        cin>>n;
        a.resize(n);
        for(int i=0;i<n;i++) cin>>a[i].st;
        for(int i=0;i<n;i++) cin>>a[i].fi;
        sort(a.begin(),a.end(),cmp);
        int cf = a[0].fi;
        for(int i=1;i<n;i++){
            if(a[i].st>=cf){
                cf = a[i].fi;
                dem++;
            }
        }
        cout<<dem<<endl;
    }
}
