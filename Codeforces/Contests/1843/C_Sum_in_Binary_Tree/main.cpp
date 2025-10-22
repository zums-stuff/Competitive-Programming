#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    long long n; cin >> n;
    long long arns = 0;
    while (n > 0) {
        arns += n;
        n /= 2;
    }
 
    cout << arns << endl;
 
}
 
int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}