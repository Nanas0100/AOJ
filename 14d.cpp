#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  int max=-1000000,min=1000000,num;
  long long sum=0;
  for(int i=0; i<n; i++){
    cin >> num;
    if(max < num) max=num;
    if(min > num) min=num;
    sum+=num;
  }
  cout << min << " " << max << " " << sum << endl;

  return 0;
}
