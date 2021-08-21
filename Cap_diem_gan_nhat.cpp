#include<bits/stdc++.h>
#define ll long long
using namespace std;
struct point {
    double x,y;
};
ll n;
double mindt;
vector<point> p;
bool cmp_x(point a,point b){
    return a.x<b.x;
}
bool cmp_y(point a,point b){
    return a.y<b.y;
}
void update(point a,point b){
    double dt = sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
    mindt = min(mindt,dt);
}
void finding(ll l,ll r){
    if(l>=r) return;
    if(r==l+1){
        update(p[l],p[r]);
        if(!cmp_y(p[l],p[r])) swap(p[l],p[r]);
        return;
    }
    ll m=(l+r)/2;
    double mid_x = p[m].x;
    finding(l,m);
    finding(m+1,r);
    vector<point> t;
    t.resize(r-l+1);
    merge(p.begin()+l,p.begin()+m+1,p.begin()+m+1,p.begin()+r+1,t.begin(),cmp_y);
    copy(t.begin(),t.begin()+r-l+1,p.begin()+l);
    ll k=0;
    for(ll i=l;i<=r;i++){
        if(abs(p[i].x - mid_x)<mindt){
            for(ll j=k-1;j>=0&&t[j].y>p[i].y-mindt;j--)
                update(p[i],t[j]);
            t[k++] = p[i];
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        mindt = 1e20;
        p.resize(n);
        for(ll i=0;i<n;i++) cin>>p[i].x>>p[i].y;
        sort(p.begin(),p.end(),cmp_x);
        finding(0,n-1);
        cout<<fixed<<setprecision(6)<<mindt<<endl;
    }
}
/*
6
1 1
4 7
4 1
6 6
8 3
9 7
*/
