#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin >> n;
    string s = "";
 
    for(int i = 0; i<32; i++){
        (n & (1<< i)) ? s += '1' : s+='0';
    }
    int k=0;
    for(int j=31; j>=0; j--){
        if(s.at(j) == '1'){
            k = j;
            break;
        }
    }
    int res = (1 << k)-1;
 
    cout << res << endl;
}
 
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}