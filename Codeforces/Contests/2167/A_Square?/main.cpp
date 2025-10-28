#include<bits/stdc++.h>
using namespace std;
 
void solve(){
	int aux; cin >> aux;
	bool arns = true;
	for(int i = 0; i < 3; i++){
		int a; cin >> a;
		if(a != aux){
			arns = false;
		}
	}
 
	cout << ((arns == true)?"YES\n":"NO\n");
}
 
int main(){
	int t; cin >> t;
	while(t--) solve();
}