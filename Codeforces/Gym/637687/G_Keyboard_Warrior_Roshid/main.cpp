#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    string s; cin >> s;
    string arns = "";
 
    for(int i = 0; i < s.size(); i++){
        if(s[i] != 'z' && s[i] != 'x' && s[i] != 'c' && s[i] != 'v' && s[i] != 'b' && s[i] != 'n' && s[i] != 'm')
            arns += s[i];
    }
    cout << arns << endl;
}
 
int main(){
    int t; cin >> t;
    while(t--) solve();
}