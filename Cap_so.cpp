#include<bits/stdc++.h>
using namespace std;
int n;
struct data{
    int x1;
    int x2;
};
vector<data> p;
bool cmp(data a,data b){
    return a.x2<b.x2;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        p.resize(n);
        for(int i=0;i<n;i++) cin>>p[i].x1>>p[i].x2;
        sort(p.begin(),p.end(),cmp);
        int cf = p[0].x2,dem = 1;
        for(int i=1;i<n;i++){
            if(cf<p[i].x1){
                cf = p[i].x2;
                dem++;
            }
        }
        cout<<dem<<endl;
    }
}
