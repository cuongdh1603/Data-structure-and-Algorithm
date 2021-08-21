#include<bits/stdc++.h>
#define ll long long
using namespace std;
struct data{
    char c;
    int m;
};
bool cmp(data x,data y){
    return x.m<y.m||(x.m==y.m&&x.c<y.c);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int d;
        string s;
        cin>>d>>s;
        int len = s.size();
        map<char,int> mp;
        vector<data>  a;
        vector<bool> visit;
        visit.resize(len,false);
        for(int i=0;i<len;i++)
            mp[s[i]]++;
        for(auto[x,y]:mp) a.push_back({x,y});
        sort(a.begin(),a.end(),cmp);
        reverse(a.begin(),a.end());
        int b = 1;
        for(int i=0;i<a.size();i++){
            for(int j=0;j<len;j++){
                if(!visit[j]){
                    for(int p=j;p<len&&a[i].m>0;p+=d){
                        if(!visit[p]){
                            visit[p] = true;
                            a[i].m--;
                        }
                        else{
                            b = 0;
                            break;
                        }
                    }
                    if(a[i].m>0) b = 0;
                    break;
                }
            }
            if(!b) break;
        }
        cout<<(b?1:-1);
        cout<<endl;
    }
}

