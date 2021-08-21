#include<bits/stdc++.h>
using namespace std;
int main(){
    short t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        deque<string> dq;
        dq.push_back("1");
        for(int i=0;i<n;i++){
            string s = dq.front();
            cout<<s<<' ';
            dq.pop_front();
            dq.push_back(s+'0');
            dq.push_back(s+'1');
        }
        cout<<endl;
    }
}
