#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    string s;
    cin >> s;
    bool isBerlanese=true;
    if((s[s.size()-1] != 'a') && (s[s.size()-1] != 'e') && (s[s.size()-1] != 'i') && (s[s.size()-1] != 'o') && (s[s.size()-1] != 'u') && (s[s.size()-1] != 'n')){
        isBerlanese = false;
        cout << "NO";
        return;
    }
    for(int i=0; i<s.size()-1; i++){
        if((s[i] != 'a') && (s[i] != 'e') && (s[i] != 'i') && (s[i] != 'o') && (s[i] != 'u') &&(s[i] != 'n')){
            if((s[i+1] != 'a') &&(s[i+1] != 'e') &&(s[i+1] != 'i') &&(s[i+1] != 'o') &&(s[i+1] != 'u')){
                isBerlanese = false;
                break;
            }
        }
    }
 
    if(isBerlanese) cout << "YES";
    else cout << "NO";
}
 
int main(){
    solve();
}