#include <iostream>
#define rep(i,n) for(int i=0; i<n; i++)
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int a[n][m];
    int b[m];
    int i,j;
    rep(i,n){
        rep(j,m){
            cin >> a[i][j];
        }
    }
    rep(j,m){
        cin >> b[j];
    }
    int sum=0,mul;
    rep(i,n){
        rep(j,m){
            mul = a[i][j]*b[j];
            sum += mul;
        }
        cout << sum << endl;
        sum=0;
    }

    return 0;
}