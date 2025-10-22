#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    long long a, b; cin >> a >> b;
 
    if(a%2==0){
        if(b%2!=0) cout << -1 << "\n";
        else cout << a * b/2 + 2 << "\n";
    }
    else{
        if(b%2 != 0) cout << a*b+1 << "\n";
        else if(b%4 == 0) cout << a*b/2 + 2 << "\n";
        else cout << -1 << "\n";
    }
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) solve();
}