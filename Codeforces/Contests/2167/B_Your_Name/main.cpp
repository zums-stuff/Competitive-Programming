    #include<bits/stdc++.h>
    using namespace std;
     
    void solve(){
    	int n; cin >> n;
    	map<char,int> s1;
    	map<char,int> s2;
     
    	for(int i = 0; i < n; i++){
    		char c; cin >> c;
    		s1[c]++;
    	}
    	for(int i = 0; i < n; i++){
    		char c; cin >> c;
    		s2[c]++;
    	}
     
    	for(auto pair:s1){
    		if(pair.second != s2[pair.first]){
    			cout << "NO\n";
    			return;
    		}
    	}
     
    	cout << "YES\n";
    }
     
    int main(){
    	int t; cin >> t;
    	while(t--) solve();
    }
     