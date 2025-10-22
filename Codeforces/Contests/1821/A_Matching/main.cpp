#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    string s;
    cin >> s;
    int signs = 0;
    bool b = false;
    int ansr = 1;
    if(count(s.begin(), s.end(), '?') == 0){
        if(s[0] == '0'){
            cout << 0 << endl;
            return;
        }
        else{
            cout << 1 << endl;
            return;
        }
    }
 
    if(s[0] == '0'){
        cout << 0 << endl;
        return;
    }
 
    if(s[0] == '?'){
        signs--;
        b = true;
    }
 
    signs += count(s.begin(), s.end(), '?');
    ansr = pow(10, signs);
    if(b == true){
        ansr*=9;
    }
    cout << ansr<< endl;
}
 
int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}