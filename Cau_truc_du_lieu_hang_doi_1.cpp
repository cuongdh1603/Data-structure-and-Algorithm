#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        deque<ll> q;
        int n,x;
        cin>>n;
        while(n--){
            cin>>x;
            switch(x){
                case 1:
                    cout<<q.size()<<endl;
                    break;
                case 2:
                    cout<<(q.empty()?"YES":"NO")<<endl;
                    break;
                case 3:
                    ll v;
                    cin>>v;
                    q.push_back(v);
                    break;
                case 4:
                    if(q.size())
                    q.pop_front();
                    break;
                case 5:
                    if(q.size()) cout<<q.front();
                    else cout<<-1;
                    cout<<endl;
                    break;
                case 6:
                    if(q.size()) cout<<q.back();
                    else cout<<-1;
                    cout<<endl;
                    break;
            }

        }
    }
}
