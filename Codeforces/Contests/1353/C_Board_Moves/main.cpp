#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n; cin >> n;
    if(n == 1){
	cout << 0 << endl;
	return;
    }
    
    ll m = (n-1)/2;
    ll arns = 8 * (m*(m+1)*(2*m + 1))/6;

    cout << arns << endl;
}

int main(){
   int t; cin >> t;
   while(t--) solve();
}
