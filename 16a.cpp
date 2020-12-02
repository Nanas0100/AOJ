#include <iostream>
#include <vector>
using namespace std;

int main(void){
  int n;
  vector<bool> s(13),h(13),c(13),d(13);
  cin >> n;
  string st; int num;
  for(int i=0; i<n; i++){
      cin >> st >> num;
      if(st == "S") s[num] = true;
      if(st == "H") h[num] = true;
      if(st == "C") c[num] = true;
      if(st == "D") d[num] = true;
  }
  for(int i=1; i<=13; i++) if(s[i] == false) cout << "S" << " " << i << endl;
  for(int i=1; i<=13; i++) if(h[i] == false) cout << "H" << " " << i << endl;
  for(int i=1; i<=13; i++) if(c[i] == false) cout << "C" << " " << i << endl;
  for(int i=1; i<=13; i++) if(d[i] == false) cout << "D" << " " << i << endl;
      
  return 0;
}