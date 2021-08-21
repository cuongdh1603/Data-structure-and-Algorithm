#include<bits/stdc++.h>
using namespace std;
int n;
int graph[10][10];
bool visit[10][10];
vector<string> ans;
void Try(int x,int y,string route){
    if(x==n&&y==n){
        ans.push_back(route);
        return;
    }
    if(graph[x-1][y]&&!visit[x-1][y]){
        visit[x-1][y] = true;
        Try(x-1,y,route+'U');
        visit[x-1][y] = false;
    }
    if(graph[x][y+1]&&!visit[x][y+1]){
        visit[x][y+1] = true;
        Try(x,y+1,route+'R');
        visit[x][y+1] = false;
    }
    if(graph[x+1][y]&&!visit[x+1][y]){
        visit[x+1][y] = true;
        Try(x+1,y,route+'D');
        visit[x+1][y] = false;
    }
    if(graph[x][y-1]&&!visit[x][y-1]){
        visit[x][y-1] = true;
        Try(x,y-1,route+'L');
        visit[x][y-1] = false;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        memset(graph,0,sizeof(graph));
        memset(visit,false,sizeof(visit));
        ans.clear();
        cin>>n;
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
            cin>>graph[i][j];
        string s = "";
        if(graph[1][1]&&graph[n][n]){
            visit[1][1] = true;
            Try(1,1,s);
        }
        if(ans.size()){
            sort(ans.begin(),ans.end());
            for(int i=0;i<ans.size();i++) cout<<ans[i]<<' ';
        }
        else cout<<-1;
        cout<<endl;
    }
}
/*
4
4
1 0 0 0

1 1 0 1

0 1 0 0

0 1 1 1
4
1 0 0 0

1 1 0 1

1 1 0 0

0 1 1 1

5

1 0 0 0 0

1 1 1 1 1

1 1 1 0 1

0 0 0 0 1

0 0 0 0 1
5

0 0 0 0 0

1 1 1 1 1

1 1 1 0 1

0 0 0 0 1

0 0 0 0 1
*/
