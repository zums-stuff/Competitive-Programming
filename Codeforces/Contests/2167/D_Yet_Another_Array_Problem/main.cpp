    #include<bits/stdc++.h>
    using namespace std;
     
    void solve(){
    	int n; cin >> n;
    	vector<long long> v(n);
     
    	for(int i = 0; i < n; i++)
    		cin >> v[i];
     
    	vector<long long> primos = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53};
     
    	for(int i:primos){
    		for(long long a:v){
    			if(a%i != 0){
    				cout << i << endl;
    				return;
    			}
    		}
    	}
    	cout << -1 << endl;
    }
     
    int main(){
    	int t; cin >> t;
    	while(t--) solve();
    }
     