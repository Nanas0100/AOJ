#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    while(1){
        cin >> s;
        if(s[0] == '0') break;
        long long ans = 0;
        for(int i=0; i<s.size();i++){
            ans += s[i]-'0';
        }
        cout << ans << endl;
    }
    return 0;
}