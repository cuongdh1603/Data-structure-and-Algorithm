#include<bits/stdc++.h>
using namespace std;
int l,r;
int countNum(int x){
    int s = 0;
    while(x){
        s++;
        x /= 10;
    }
    return s;
}
bool isOk(int x){
    int num[6] = {0};
    while(x){
        if(x%10>5||num[x%10]) return false;
        else num[x%10] = 1;
        x/=10;
    }
    return true;//(x>=l&&x<=r);
}
void solve(){
    int ans = 0;
    deque<int> dq;
    dq.push_back(0);
    while(1){
        int v = dq.front();
        dq.pop_front();
        if(isOk(v)){
            ans++;
            for(int i=0;i<=5;i++){
                if(isOk(v*10+i)) dq.push_back(v*10+i);
                else if(v*10+i>r) break;
            }
        }
        //else if(v>r) break;
    }
    ans += dq.size();
    cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int ans = 0;
        cin>>l>>r;
        for(int i=l;i<=r;i++){
            if(isOk(i)) ans++;
        }
        //solve();
        cout<<ans<<endl;
    }
}
/*
2

4  13

100  1000
*/
