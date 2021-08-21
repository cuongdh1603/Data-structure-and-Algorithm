#include<bits/stdc++.h>
#define mxn 5
using namespace std;
char a[mxn][mxn];
bool visited[mxn][mxn];
int k,m,n;
vector<string> dic,ans;
set<string> st;
int d_x[] = {-1,-1,-1,0,0,1,1,1};
int d_y[] = {-1,0,1,-1,1,-1,0,1};
void init(){
    cin>>k>>m>>n;
    dic.resize(k);
    ans.clear();
    for(int i=0;i<k;i++) cin>>dic[i];
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
        cin>>a[i][j];
    memset(visited,false,sizeof(visited));
}
bool isSafe(int x,int y){
    return x>=0&&x<m&&y>=0&&y<n&&!visited[x][y];
}
void findWay(int x,int y,string path){
    for(int i=0;i<k;i++)
        if(path == dic[i]) ans.push_back(path);

    /*
    visited[x][y] = true;
    path += a[x][y];
    for(int i=0;i<k;i++){
        if(path == dic[i]) ans.push_back(path);
    }
    */
    for(int i=0;i<8;i++){
        int x1 = x+d_x[i];
        int y1 = y+d_y[i];
        if(isSafe(x1,y1)){
            visited[x1][y1] = true;
            findWay(x1,y1,path+a[x1][y1]);
            visited[x1][y1] = false;
        }
    }
    //visited[x][y] = false;
}
void searchBoggle(){
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
        findWay(i,j,"");
}
int main(){
    int t;
    cin>>t;
    while(t--){
        init();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                string s = "";
                visited[i][j] = true;
                findWay(i,j,s+a[i][j]);
                visited[i][j] = false;
            }
        }
        //cin>>k>>m>>n;
        //dic.resize(k);
        //ans.clear();
        //st.clear();
        //memset(visited,false,sizeof(visited));
        /*
        for(int i=0;i<k;i++) cin>>dic[i];
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
            cin>>a[i][j];
        */
        //for(int i=0;i<k;i++)
        //searchBoggle(i);
        //searchBoggle();
        if(ans.size()==0) cout<<-1;
        else{
            for(int i=0;i<ans.size();i++) cout<<ans[i]<<' ';
        }
        cout<<endl;
    }
}

/*
4 3 3
EGSQ USSU EZQS QUGIZKE
G I Z

U E K

Q S E
*/
/*
4 4 4
START NOTE SAND STONED
M S E F
R A T D
L O N E
K A F B
*/
/*
1
10  3  3
QUIZ GEEKS FOR  GO UIK GEUI ZEQUIK IKSU QEE I
G I Z
U E K
Q S E

5  3  3
 FOR  GO W IQ IE
G I Z

U E K

Q S E
*/
/*
void Try(int x,int y,string s,int p){
    if(p==s.size()){
        d++;
        c = 1;
        cout<<s<<' ';
    }
    if(x>0&&y>0&&a[x-1][y-1]==s[p]&&!check[x-1][y-1]&&!c){
        check[x-1][y-1] = 1;
        Try(x-1,y-1,s,p+1);
        check[x-1][y-1] = 0;
    }
    if(x>0&&a[x-1][y]==s[p]&&!check[x-1][y]&&!c){
        check[x-1][y] = 1;
        Try(x-1,y,s,p+1);
        check[x-1][y] = 0;
    }
    if(x>0&&y<n-1&&a[x-1][y+1]==s[p]&&!check[x-1][y+1]&&!c){
        check[x-1][y+1] = 1;
        Try(x-1,y+1,s,p+1);
        check[x-1][y+1] = 0;
    }
    if(y<n-1&&a[x][y+1]==s[p]&&!check[x][y+1]&&!c){
        check[x][y+1] = 1;
        Try(x,y+1,s,p+1);
        check[x][y+1] = 0;
    }
    if(x<m-1&&y<n-1&&a[x+1][y+1]==s[p]&&!check[x+1][y+1]&&!c){
        check[x+1][y+1] = 1;
        Try(x+1,y+1,s,p+1);
        check[x+1][y+1] = 0;
    }
    if(x<m-1&&a[x+1][y]==s[p]&&!check[x+1][y]&&!c){
        check[x+1][y] = 1;
        Try(x+1,y,s,p+1);
        check[x+1][y] = 0;
    }
    if(x<m-1&&y>0&&a[x+1][y-1]==s[p]&&!check[x+1][y-1]&&!c){
        check[x+1][y-1] = 1;
        Try(x+1,y-1,s,p+1);
        check[x+1][y-1] = 0;
    }
    if(y>0&&a[x][y-1]==s[p]&&!check[x][y-1]&&!c){
        check[x][y-1] = 1;
        Try(x,y-1,s,p+1);
        check[x][y-1] = 0;
    }
}
void solve(string s){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
        if(a[i][j]==s[0]&&!check[i][j])
        {
          check[i][j] = 1;
          Try(i,j,s,1);
          //if(c) break;
          check[i][j] = 0;
        }
        //if(c) break;
    }
}
*/
