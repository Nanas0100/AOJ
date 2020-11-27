#include <iostream>
#include <vector>
using namespace std;

int main(void){
  int n;
  vector<int> a;
  cin >> n;
  a.reserve(n);
  for(int i=0; i<n; i++) cin >> a[i];

  for(int i=n-1; i>=0; i--){
    if(i==0) cout << a[i] << endl;
    else cout << a[i] << ' ' ;
  }
  return 0;
}