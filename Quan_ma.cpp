#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
bool chess[80];
int sx,sy,ex,ey;
struct data{
    int x;
    int y;
    int t;

};
int toNum(pii x){
    return x.first*10 + x.second;
}
bool ok(pii x){
    return (x.first>=0&&x.first<8&&x.second>=0&&x.second<8);
}
int main(){
    int test;
    cin>>test;
    while(test--){
        string st,en;
        cin>>st>>en;
        memset(chess,false,sizeof(chess));
        sx = st[0] - 'a',sy = st[1] - '1';
        ex = en[0] - 'a',ey = en[1] - '1';
        deque<data> dq;
        dq.push_back({sx,sy,0});
        while(dq.size()){
            data dt = dq.front();
            dq.pop_front();
            int x = dt.x,y = dt.y,t = dt.t;
            if(x==ex&&y==ey){
                cout<<t<<endl;
                break;
            }
            pii d1 = {x+1,y+2},d2 = {x+1,y-2},d3 = {x+2,y-1},d4 = {x+2,y+1},
                d5 = {x-1,y+2},d6 = {x-1,y-2},d7 = {x-2,y+1},d8 = {x-2,y-1};
            if(!chess[toNum(d1)]&&ok(d1))
                chess[toNum(d1)]=true,dq.push_back({d1.first,d1.second,t+1});
            if(!chess[toNum(d2)]&&ok(d2))
                chess[toNum(d2)]=true,dq.push_back({d2.first,d2.second,t+1});
            if(!chess[toNum(d3)]&&ok(d3))
                chess[toNum(d3)]=true,dq.push_back({d3.first,d3.second,t+1});
            if(!chess[toNum(d4)]&&ok(d4))
                chess[toNum(d4)]=true,dq.push_back({d4.first,d4.second,t+1});
            if(!chess[toNum(d5)]&&ok(d5))
                chess[toNum(d5)]=true,dq.push_back({d5.first,d5.second,t+1});
            if(!chess[toNum(d6)]&&ok(d6))
                chess[toNum(d6)]=true,dq.push_back({d6.first,d6.second,t+1});
            if(!chess[toNum(d7)]&&ok(d7))
                chess[toNum(d7)]=true,dq.push_back({d7.first,d7.second,t+1});
            if(!chess[toNum(d8)]&&ok(d8))
                chess[toNum(d8)]=true,dq.push_back({d8.first,d8.second,t+1});
        }
    }
}










/*--------------------------
#include<bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
using namespace std;
bool direc[103] = {};
int sx,sy,ex,ey;
struct data{
    int x,y,step;
};
bool check(pii a){
    return a.first>=0&&a.first<8&&a.second>=0&&a.second<8;
}
int toNum(pii a){
    return a.first*10+a.second;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s,e;
        cin>>s>>e;
        sx = s[0]-'a',sy = s[1]-'1';
        ex = e[0]-'a',ey = e[1]-'1';
        memset(direc,0,sizeof(direc));
        queue<data> Q;
        Q.push({sx, sy});
        while (Q.size()){
            data u = Q.front();
            Q.pop();
            int x = u.x,y = u.y,t = u.step;
            if(u.x==ex&&u.y==ey){
                cout<<t<<endl;
                break;
            }
            pii a1={x+2,y-1},a2={x+2,y+1},a3={x-2,y-1},a4={x-2,y+1};
            pii a5={x+1,y-2},a6={x+1,y+2},a7={x-1,y-2},a8={x-1,y+2};
            if(!direc[toNum(a1)] && check(a1))
                direc[toNum(a1)]=1,Q.push({a1.first,a1.second,t+1});
            if(!direc[toNum(a2)] && check(a2))
                direc[toNum(a2)]=1,Q.push({a2.first,a2.second,t+1});
            if(!direc[toNum(a3)] && check(a3))
                direc[toNum(a3)]=1,Q.push({a3.first,a3.second,t+1});
            if(!direc[toNum(a4)] && check(a4))
                direc[toNum(a4)]=1,Q.push({a4.first,a4.second,t+1});
            if(!direc[toNum(a5)] && check(a5))
                direc[toNum(a5)]=1,Q.push({a5.first,a5.second,t+1});
            if(!direc[toNum(a6)] && check(a6))
                direc[toNum(a6)]=1,Q.push({a6.first,a6.second,t+1});
            if(!direc[toNum(a7)] && check(a7))
                direc[toNum(a7)]=1,Q.push({a7.first,a7.second,t+1});
            if(!direc[toNum(a8)] && check(a8))
                direc[toNum(a8)]=1,Q.push({a8.first,a8.second,t+1});
        }
    }
}
*/
