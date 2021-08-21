#include<bits/stdc++.h>
using namespace std;
int n,len;
string s,t;
//vector<string> str;
typedef pair<string,int> ii;
string rep(int p,char c,string s){
    s[p] = c;
    return s;
}
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        cin>>n>>s>>t;
        string rs;
        set<string> md,st;
        len = s.size();
        for(int i=0;i<n;i++){
            cin>>rs;
            md.insert(rs);
        }
        deque<ii> dq;
        dq.push_back({s,1});
        st.insert(s);
        while(dq.size()){
            rs = dq.front().first;
            int k = dq.front().second;
            //cout<<rs<<' '<<k<<endl;
            dq.pop_front();
            if(rs==t){
                cout<<k<<endl;
                break;
            }
            else{
                for(int i=0;i<len;i++){
                    for(char c='A';c<='Z';c++){
                        string tmp = rep(i,c,rs);
                        if(md.find(tmp)!=md.end()&&st.find(tmp)==st.end())
                        {
                            dq.push_back({tmp,k+1});
                            st.insert(tmp);
                        }
                    }
                }
            }
        }
    }
}
/*
2
8 TOON  PLEA

POON TOON PLEE SAME  POIE  PLEA  PLIE  POIN
4
ABCV
EBAD
ABCD EBAD EBCD XYZA

*/
