#include<bits/stdc++.h>
using namespace std;
 
void solve(){
	int n; cin >> n;
	vector<int> v(n);
	bool hayPar = false;
	bool hayImpar = false;
 
	for(int i = 0; i < n; i++){
		cin >> v[i];
		if(v[i]%2 == 0) hayPar = true;
		else hayImpar = true;
	}
 
	if(hayPar && hayImpar) sort(v.begin(), v.end());
	
	for(int i = 0; i < n; i++){
		cout << v[i] << " ";
	}
	cout << endl;
}
 
int main(){
	int t; cin >> t;
	while(t--) solve();
}