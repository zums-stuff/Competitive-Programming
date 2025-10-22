#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n; cin >> n;
    vector<long long> v(n);
    for(int i = 0; i<n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
 
    long long arns = 0;
 
    for(int i = 0; i < n; i+=2){
        arns += max(v[i], v[i+1]);
    }
 
    cout << arns << endl;
}
 
int main(){
    int t; cin >> t;
    while(t--) solve();
}