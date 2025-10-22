#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    vector<int> res(n);
    for(int i=0; i<n; i++){
        cout << n+1 - v[i] << " ";
    }
 
}
 
//Permutación de un arreglo tal que el gcd de todos los elementos adyacentes sea mayor o igual a 3
int main(){
    int t; cin >> t;
    while(t--) solve();
}