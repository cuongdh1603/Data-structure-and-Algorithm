#include<bits/stdc++.h>
#define mxn 103
using namespace std;
int n,a,b,c,d;
char graph[mxn][mxn];
bool vs[mxn][mxn];
struct data{
    int x,y;
    int step;
};
int main(){
    int t;
    cin>>t;
    while(t--){
        memset(vs,false,sizeof(vs));
        int check = 0;
        cin>>n;
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
            cin>>graph[i][j];
        cin>>a>>b>>c>>d;
        a++;b++;c++;d++;
        deque<data> dq;
        dq.push_back({a,b,0});
        vs[a][b] = true;
        while(dq.size()){
            data u = dq.front();
            dq.pop_front();
            int x = u.x;
            int y = u.y;
            int s = u.step;
            for(int i=y+1;i<=n;i++)
                if(graph[x][i]=='.'){
                    if(!vs[x][i]){
                        vs[x][i] = true;
                        dq.push_back({x,i,s+1});
                        if(x==c&&i==d){
                            cout<<s+1<<endl;
                            check = 1;
                            break;
                        }
                    }
                }
                else break;
            if(check) break;
            for(int i=y-1;i>0;i--)
                if(graph[x][i]=='.'){
                    if(!vs[x][i]){
                        vs[x][i] = true;
                        dq.push_back({x,i,s+1});
                        if(x==c&&i==d){
                            cout<<s+1<<endl;
                            check = 1;
                            break;
                        }
                    }
                }
                else break;
            if(check) break;
            for(int i=x+1;i<=n;i++)
                if(graph[i][y]=='.'){
                    if(!vs[i][y]){
                        vs[i][y] = true;
                        dq.push_back({i,y,s+1});
                        if(i==c&&y==d){
                            cout<<s+1<<endl;
                            check = 1;
                            break;
                        }
                    }
                }
                else break;
            if(check) break;
            for(int i=x-1;i>0;i--)
                if(graph[i][y]=='.'){
                    if(!vs[i][y]){
                        vs[i][y] = true;
                        dq.push_back({i,y,s+1});
                        if(i==c&&y==d){
                            cout<<s+1<<endl;
                            check = 1;
                            break;
                        }
                    }
                }
                else break;
            if(check) break;
        }
    }
}
