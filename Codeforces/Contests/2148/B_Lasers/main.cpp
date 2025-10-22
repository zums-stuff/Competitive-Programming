#include<bits/stdc++.h>
using namespace std;
 
void solve(){
	long long n, m, x, y;
	cin >> n >> m >> x >> y;
	
	vector<long long> horizontales;
	vector<long long> verticales;
 
	for(int i = 0; i < n; i++){
		long long aux;
		cin >> aux;
		horizontales.push_back(aux);
	}
	
	for(int i = 0; i < m; i++){
		long long aux;
		cin >> aux;
		verticales.push_back(aux);
	}
 
	sort(horizontales.begin(), horizontales.end());
	sort(verticales.begin(), verticales.end());
 
	long long arns = upper_bound(horizontales.begin(), horizontales.end(), y) - horizontales.begin();
    arns += upper_bound(verticales.begin(), verticales.end(), x) - verticales.begin();
	cout << arns << endl;
}
 
int main(){
	int t; cin >> t;
	while(t--) solve();
}