#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int INF = 1e8;

void solve(){
   int n, m; cin >> n >> m;
   vector<string> s(n);
   for(int i = 0; i < n; i++) cin >> s[i];

   int arns = INF;

   for(int i = 0; i < n; i++){
	for(int j = 0; j < n; j++){
	   if(i != j){
		   int diff = 0;
		for(int k = 0; k < m; k++){
		    diff += abs(s[i][k] - s[j][k]);
		}
		arns = min(arns, diff);
	   } 
	}
   }

   cout << arns << endl;
}

int main(){
   int t; cin >> t;
   while(t--) solve();
}
