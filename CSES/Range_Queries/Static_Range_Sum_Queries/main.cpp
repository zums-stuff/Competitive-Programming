#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n, q;
    cin >> n >> q;
 
    vector<long long> v(n);
    vector<long long> prefix_zum(n);
 
    for(int i = 0; i < n; i++)
        cin >> v[i];
 
    prefix_zum[0] = v[0];
    for(int i = 1; i < n; i++)
        prefix_zum[i] = prefix_zum[i-1] + v[i];
 
    while(q--){
        long long l, r; cin >> l >> r;
 
        l--;
        r--;
 
        if(l == 0) cout << prefix_zum[r] << endl;
        else cout << prefix_zum[r] - prefix_zum[l-1] << endl;
    }
    return 0;
}