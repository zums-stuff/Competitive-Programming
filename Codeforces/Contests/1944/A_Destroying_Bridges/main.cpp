#include <iostream>
using namespace std;
 
void solve(){
    int n, k;
    cin >> n >> k;
 
    int mn = n;
    for(int s = 1; s <= n; ++s){
        int cut_edges = s * (n - s);
        if (cut_edges <= k) {
            mn = min(mn, s);
        }
    }
 
    cout << mn << '\n';
}
int main() {
    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}