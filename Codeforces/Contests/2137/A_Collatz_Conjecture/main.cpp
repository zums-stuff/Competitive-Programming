#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    long long n, k;
    cin >> k >> n;
    while(k--){
        n*=2;
    }
    cout << n << "\n";
}
 
int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}