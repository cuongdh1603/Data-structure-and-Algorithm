#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> a,tmp;
int main(){
    short t;
    cin>>t;
    while(t--){
        int ans = -100000,c_ans = 0;
        cin>>n;
        a.resize(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            c_ans += a[i];
            ans = max(ans,c_ans);
            if(c_ans<0) c_ans = 0;
        }
        cout<<ans<<endl;
    }
}
