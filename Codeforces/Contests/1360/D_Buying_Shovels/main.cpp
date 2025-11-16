#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    ll n, k; cin >> n >> k;
    if(k >= n){
	cout << 1 << endl;
	return;
    }

    ll a = 1;

    for(ll i = 1; i*i <= n; i++){
	if(n % i == 0){
	    if(i <= k) a = max(a, i);
	    if(n/i <= k) a = max(a, n/i);
	}
    }

    cout << n/a << endl;
}

int main(){
   int t; cin >> t;
   while(t--) solve();
}
