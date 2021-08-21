#include<bits/stdc++.h>
#define ll long long
#define max_of_size 13
#define mod 1000000007
using namespace std;
template <class T>
struct matrix{
    T a[max_of_size][max_of_size];
    int n;
    T* operator[] (int i){
        return a[i];
    }
    const T* operator[] (int i) const{
        return a[i];
    }
    void input(){
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
            cin>>a[i][j];
    }
    void output(){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++)
                cout<<a[i][j]<<' ';
            cout<<endl;
        }
    }
    void calculateMainDiagonal(){
        ll sum = 0;
        for(int i=1;i<=n;i++)
        {
            sum += a[i][i];
            sum %= mod;
        }
        cout<<sum<<endl;
    }
    void clear(int N){
        n = N;
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
            a[i][j] = 0;
    }
    void operator = (const matrix &A);
    matrix(int N){
        clear(N);
    }
};
template <class T> matrix<T>
operator * (const matrix<T> A,const matrix<T> B){
    int n = A.n;
    matrix<T> C(n);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        for(int k=1;k<=n;k++){
            C[i][j] += (A[i][k]%mod * B[k][j]%mod)%mod;
            C[i][j]%=mod;
        }
    return C;
}
template <class T> matrix<T>
operator ^ (const matrix<T> A,ll k){
    if(k==1) return A;
    matrix<T> P = A^(k/2);
    P = P*P;
    if(k&1) return P*A;
    else return P;
}
template <class T> void matrix<T>::
operator = (const matrix<T> &A){
    int n = A.n;
    for(int i=1;i<=A.n;i++)
        for(int j=1;j<=A.n;j++)
        a[i][j] = A[i][j];
    n = A.n;
}
/*
matrix::calculateMainDiagonal(matrix<T> a){
    ll sum = 0;
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++){
        if(i==j){
            sum += a[i][j];
            sum %= mod;
        }
    }
    cout<<sum<<endl;
}
*/
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        ll k;
        cin>>n>>k;
        matrix<ll> a(n);
        a.input();
        a = a^k;
        //a.output();
        a.calculateMainDiagonal();
    }
}
/*
2
2 5
1 1
1 0
3 1000000000
1 2 3
4 5 6
7 8 9
*/
