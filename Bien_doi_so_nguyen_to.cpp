#include<bits/stdc++.h>
#define N 10003
using namespace std;
typedef pair<int,int> ii;
int d[N];
void sang(){
    d[0] = d[1] = 1;
    for(int i=2;i*i<=N;i++)
        if(!d[i])
        for(int j=i*i;j<=N;j+=i) d[j] = 1;
}
int rep(int p,int v,int val){
    int k = pow(10,p);
    int tv = (val/k)%10;
    return val - tv*k + v*k;
}
int main(){
    sang();
    int tt;
    cin>>tt;
    while(tt--){
        int s,t;
        cin>>s>>t;
        set<int> st;
        deque<ii> dq;
        dq.push_back({s,0});
        st.insert(s);
        while(dq.size()){
            ii u = dq.front();
            dq.pop_front();
            if(u.first==t){
                cout<<u.second<<endl;
                break;
            }
            else{
                for(int i=0;i<4;i++){
                    for(int j=0;j<=9;j++){
                        int v = rep(i,j,u.first);
                        if(!d[v]&&v>1000&&st.find(v)==st.end()){
                            dq.push_back({v,u.second+1});
                            st.insert(v);
                        }
                    }
                }
            }
        }
    }
}
/*
2

1033 8179

1033 8779
*/
