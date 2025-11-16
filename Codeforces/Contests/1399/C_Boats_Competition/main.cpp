    #include<bits/stdc++.h>
    using namespace std;
     
    typedef long long ll;
     
    int check(int s, const vector<int>& w){
        int l = 0, r = w.size()-1;
        int arns = 0;
        while(l < r){
    	if(w[l] + w[r] == s){
    	    arns++;
    	    l++;
    	    r--;
    	}
    	else if(w[l] + w[r] < s){
    	    l++;
    	}
    	else r--;
        }
     
        return arns;
    }
     
    void solve(){
        int n; cin >> n;
        
        vector<int> w(n);
     
        for(int i = 0; i < n; i++) cin >> w[i];
        if(n < 2){
    	cout << 0 << endl;
    	return;
        }
        sort(w.begin(), w.end());
     
        int arns = 0;
        for(int i = 2; i <= 2*n; i++) arns = max(arns, check(i, w));
     
        cout << arns << endl;
    }
     
    int main(){
       int t; cin >> t;
       while(t--) solve();
    }