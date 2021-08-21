#include<bits/stdc++.h>
using namespace std;
struct job{
    int id;
    int dl;
    int pr;
};
vector<job> a;
vector<bool> check;
bool cmp(job x,job y){
    return x.pr<y.pr||(x.pr==y.pr&&x.dl>y.dl);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,maxp = 0,dem = 0,maxdl = 0;
        cin>>n;
        a.resize(n);
        for(int i=0;i<n;i++){
            cin>>a[i].id>>a[i].dl>>a[i].pr;
            maxdl = max(maxdl,a[i].pr);
        }
        check.resize(maxdl+1);
        for(int i=0;i<=maxdl;i++) check[i] = false;
        sort(a.begin(),a.end(),cmp);
        //int tm = 1;
        for(int i=n-1;i>=0;i--){
            for(int j=a[i].dl-1;j>=0;j--){
                if(!check[j]){
                    check[j] = true;
                    dem++;
                    maxp += a[i].pr;
                    break;
                }
            }
        }
        cout<<dem<<' '<<maxp<<endl;
    }
}
/*
1 2  100
2 1   19
3 2   27
4 1   25
5 3   15
*/
