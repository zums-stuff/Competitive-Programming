#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	set<int> s;
	
	for(int i = 0; i<n-1; i++){
		int aux;
		cin >> aux;
		s.insert(aux);	
	}
	
	for(int i = 1; i <= n; i++){
		if(s.find(i) == s.end()){
			cout << i;
			return 0;
		}
	}
}