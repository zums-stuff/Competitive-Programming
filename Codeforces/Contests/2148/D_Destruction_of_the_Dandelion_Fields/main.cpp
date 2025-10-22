#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
void solve(){
    int n;
    cin >> n;
    vector<ll> impares;
    ll arns = 0;
 
    for(int i = 0; i<n; i++){
        ll aux; cin >> aux;
        if(aux%2 == 0) arns+= aux;
        else impares.push_back(aux);
    }
 
    if(impares.size() == 0){
        cout<< 0 << endl;
        return;
    }
 
    sort(impares.begin(), impares.end());
    arns += impares[impares.size()-1];
 
    int first = 0, last = impares.size()-2;
    while(first < last){
        arns += impares[last];
        last--;
        first++;
    }
    cout << arns << endl;
}
 
int main(){
    int t; cin >> t;
    while(t--) solve();
}