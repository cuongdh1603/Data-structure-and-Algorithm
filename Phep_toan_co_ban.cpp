//please do it by myself!!!
#include<bits/stdc++.h>//created by DO HUNG CUONG(dhc1603)
#define ll long long
#define ld long double
#define faster ios_base::sync_with_stdio(false);    \
    cin.tie(0);                                     \
    cout.tie(0);
#define vi vector<int>
#define vl vector<ll>
#define sz(x) ((int)(x).size())
#define bg begin()
#define ed end()
#define all(x) (x).bg,(x).ed
#define pb push_back
#define minv(a) *min_element(a.bg,a.ed)
#define maxv(a) *max_element(a.bg,a.ed)
#define pii pair<int,int>
#define pli pair<ll,int>
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define nrep(i,b,a) for(int i=(b);i>=(a);i--)
using namespace std;
template<typename T> using minpq = priority_queue<T,vector<T>,greater<T>>;
template<typename T> using maxpq = priority_queue<T,vector<T>,less<T>>;
const int N = 300005;
const ll mod = 1e9+7;
const ll inf = 1e18+7;
const int mxn = 1003;
string n1,op1,n2,op2,n3;
int strToInt(string s){
    int a = 0;
    for(int i=0;i<sz(s);i++) a = a*10 + (s[i]-'0');
    return a;
}
void Input(){
    cin>>n1>>op1>>n2>>op2>>n3;
}
void Solve(){
    if(op1=="*"||op1=="*")
        cout<<"WRONG PROBLEM!";
    else{
        vector<string> vn1,vn2,vn3;
        int op = (op1 == "?"?2:1);
        if(n1[0]=='?'){
            for(int i=1;i<=9;i++){
                n1[0] = i + '0';
                if(n1[1]=='?'){
                    for(int j=0;j<=9;j++){
                        n1[1] = j + '0';
                        vn1.pb(n1);
                    }
                }
                else vn1.pb(n1);
            }
        }
        else if(n1[1]=='?'){
            for(int j=0;j<=9;j++){
                n1[1] = j + '0';
                vn1.pb(n1);
            }
        }
        else vn1.pb(n1);
        if(n2[0]=='?'){
            for(int i=1;i<=9;i++){
                n2[0] = i + '0';
                if(n2[1]=='?'){
                    for(int j=0;j<=9;j++){
                        n2[1] = j + '0';
                        vn2.pb(n2);
                    }
                }
                else vn2.pb(n2);
            }
        }
        else if(n2[1]=='?'){
            for(int j=0;j<=9;j++){
                n2[1] = j + '0';
                vn2.pb(n2);
            }
        }
        else vn2.pb(n2);
        if(n3[0]=='?'){
            for(int i=1;i<=9;i++){
                n3[0] = i + '0';
                if(n3[1]=='?'){
                    for(int j=0;j<=9;j++){
                        n3[1] = j + '0';
                        vn3.pb(n3);
                    }
                }
                else vn3.pb(n3);
            }
        }
        else if(n3[1]=='?'){
            for(int j=0;j<=9;j++){
                n3[1] = j + '0';
                vn3.pb(n3);
            }
        }
        else vn3.pb(n3);
        int d = 0;
        if(op==1){
            if(op1=="+"){
                for(int i=0;i<sz(vn1);i++){
                    for(int j=0;j<sz(vn2);j++){
                        for(int k=0;k<sz(vn3);k++){
                            if(strToInt(vn1[i])+strToInt(vn2[j])==strToInt(vn3[k])){
                                cout<<vn1[i]<<' '<<op1<<' '<<vn2[j]<<' '<<op2<<' '<<vn3[k],d = 1;
                                break;
                            }
                        }
                        if(d) break;
                    }
                    if(d) break;
                }
            }
            else if(op1=="-"){
                for(int i=0;i<sz(vn1);i++){
                    for(int j=0;j<sz(vn2);j++){
                        for(int k=0;k<sz(vn3);k++){
                            if(strToInt(vn1[i])-strToInt(vn2[j])==strToInt(vn3[k])){
                                cout<<vn1[i]<<' '<<op1<<' '<<vn2[j]<<' '<<op2<<' '<<vn3[k],d = 1;
                                break;
                            }
                        }
                        if(d) break;
                    }
                    if(d) break;
                }
            }
        }
        else if(op==2){
                for(int i=0;i<sz(vn1);i++){
                    for(int j=0;j<sz(vn2);j++){
                        for(int k=0;k<sz(vn3);k++){
                            if(strToInt(vn1[i])+strToInt(vn2[j])==strToInt(vn3[k])){
                                cout<<vn1[i]<<' '<<'+'<<' '<<vn2[j]<<' '<<op2<<' '<<vn3[k],d = 1;
                                break;
                            }
                            else if(strToInt(vn1[i])-strToInt(vn2[j])==strToInt(vn3[k])){
                                cout<<vn1[i]<<' '<<'-'<<' '<<vn2[j]<<' '<<op2<<' '<<vn3[k],d = 1;
                                break;
                            }
                        }
                        if(d) break;
                    }
                    if(d) break;
                }
        }
        if(!d) cout<<"WRONG PROBLEM!";
    }
    cout<<endl;
}
int main(){
    faster;
    int test = 1;
    cin>>test;
    while(test--){
        Input();
        Solve();
    }
}

/*
#include <bits/stdc++.h>
using namespace std;

#define ll        long long
#define endl      <<endl
#define pii       pair<int, int>
#define MIN       INT_MIN
#define MAX       LLONG_MAX
// #define m         %u

#define res(x)          resize(x)
#define sz()            size()
#define er              erase
#define pb              push_back
#define eleV            vector <ele>
#define all(vec)        vec.begin(), vec.end()
#define rs(A,x)         memset(A, x, sizeof(A))
#define Unique(C)       C.erase(unique(C.begin(), C.end()), C.end())
#define pq(x)           priority_queue<x>
#define neg_pq(x)       priority_queue<x, vector<x>, greater<x>>
#define vec2(C,x,y,tp)  vector<vector<tp> > C(x, vector<tp> (y, 0))

#define FOR(i, m, n)    for(int i = m; i < n; ++i)
#define FORx(i,m,n,x)   for(int i = m; i < n; i += x)
#define FORD(i, m, n)   for(int i = m; i >= n; --i)
#define get(C,a)        FOR(i, 0, a) cin >> C[i]
#define print(C,a)      FOR(i, 0, a) cout << C[i]
#define faster()        cin.tie(0); ios_base::sync_with_stdio(false); cout.tie(0);
#define run()           int t; cin >> t; while (t--)

// --------------------------------------------------------- //

string n1, n2, n3, op;

void reset();
void getip();

int gc(char x, int num)
{
    if (x == '?')
        return num;
    return x - '0';
}

char gop(char x, int num)
{
    if (x == '?')
    {
        if (num)
            return '+';
        return '-';
    }
    return x;
}

void solve()
{
    if (op[0] == '/' || op[0] == '*')
    {
        cout << "WRONG PROBLEM!" endl;
        return;
    }

    FOR(i, 1, 10)
    {
        int s1 = gc(n1[0], i);
        FOR(j, 0, 10)
        {
            int s2 = s1 * 10 + gc(n1[1], j);
            // cout << s2 endl;
            FOR(m, 1, 10)
            {
                int a1 = gc(n2[0], m);
                FOR(n, 0, 10)
                {
                    int a2 = a1 * 10 + gc(n2[1], n);
                    // cout << a2 endl;
                    FOR(x, 1, 10)
                    {
                        int b1 = gc(n3[0], x);
                        FOR(y, 0, 10)
                        {
                            int b2 = b1 * 10 + gc(n3[1], y);
                            // cout << s2 << " 1 " << a2 << " 2 " << b2 << " " << b1 << " " << b2 endl;
                            // cout << b2 endl;
                            FOR(k, 0, 2)
                            {
                                char oprt = gop(op[0], k);

                                if (oprt == '+')
                                {
                                    if (s2 + a2 == b2)
                                    {
                                        cout << s2 << " + " << a2 << " = " << b2 endl;
                                        return;
                                    }
                                }
                                else
                                {
                                    if (s2 - a2 == b2)
                                    {
                                        cout << s2 << " - " << a2 << " = " << b2 endl;
                                        return;
                                    }
                                }
                            }
                            b2 -= b2;
                        }
                    }
                    a2 -= a2;
                }
            }
            s2 -= s2;
        }
    }
    cout << "WRONG PROBLEM!" endl;
}

int main ()
{
    faster();
    run()
    {
        getip();
        solve();
    }
    return 0;
}


// --------------------------------------------------------- //
void getip()
{
    reset();
    cin >> n1 >> op >> n2 >> n3 >> n3;
    // cout << n1[0] << " " << n1[1] << " " << op << " " << n2[0] << " " << n2[1] << " = " << n3[0] << " " << n3[1] endl;
}

void reset()
{

}
*/
