#include <iostream>
using namespace std;

int main(){
  int a,b,ans;
  char op;
  while(1){
    cin >> a >> op >> b;
    if(op == '+') ans=a+b;
    if(op == '-') ans=a-b;
    if(op == '*') ans=a*b;
    if(op == '/') ans=a/b;
    if(op == '?') break;
    cout << ans << endl;
  }
  return 0;
}
