    #include<bits/stdc++.h>
    using namespace std;
     
    typedef long long ll;
     
    int main(){
        int n; cin >> n;
        vector<ll> a(n);
        vector<ll> b(n);
     
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];
     
        vector<ll> d(n);
     
        for(int i = 0; i < n; i++) d[i] = a[i] - b[i];
     
        sort(d.begin(), d.end());
     
        ll arns = 0;
     
        int l = 0, r = n - 1;
        while(l < r){
            if(d[l] + d[r] > 0){
    	    arns += abs(l-r);
    	    r--;
            }
    	else{
    	    l++;
    	}
        }
     
        cout << arns;
    }