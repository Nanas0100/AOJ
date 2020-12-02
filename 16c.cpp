#include <iostream>
#include <vector>
#define rep(i,n) for(int i=0; i<n; i++)
using namespace std;

int main(void){
    int n,b,f,r,v;
    int a[4][3][10]={0};
    cin >> n;
    rep(i,n){
        cin >> b >> f >> r >> v;
        a[b-1][f-1][r-1] += v;
    }
    rep(i,4){
        rep(j,3){
            rep(k,10){
                cout << " " << a[i][j][k];
            }       
            cout << endl;
        }
    if(i == 3) break;
    cout << "####################" << endl;
    }
    return 0;
}
