#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n, x;
    cin >> x >> n;
 
    if(n%2 != 0) cout << x << endl;
    else cout << 0 << endl;
}
 
int main(){
    int t; cin >> t;
    while(t--) solve();
}