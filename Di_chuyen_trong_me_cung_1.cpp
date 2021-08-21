#include<bits/stdc++.h>
using namespace std;
int a[15][15],n,d=0;
void sol(int x,int y,string s){
    if(x==n&&y==n){
        d++;
        cout<<s<<' ';
        //s = "";
        return;
    }
    int dm = 0;
    if(x<n&&a[x+1][y]==1)
        {
            dm++;
            s += "D";
            sol(x+1,y,s);
            s.pop_back();
        }
    if(y<n&&a[x][y+1]==1)
        {
            dm++;
            s += "R";
            sol(x,y+1,s);
            s.pop_back();
        }
    if(!dm) return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        d = 0;
        memset(a,0,sizeof(a));
        cin>>n;
        string s = "";
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
            cin>>a[i][j];
        if(a[1][1])
        sol(1,1,s);
        if(d==0) cout<<-1;
        cout<<endl;
    }
}
/*
2
4
1 0 0 0
1 1 0 1
0 1 0 0
1 1 1 1
5
1 0 0 0 0
1 1 1 1 1
1 1 0 0 1
0 1 1 1 1
0 0 0 1 1
*/
