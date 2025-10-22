#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
ll kadane(vector<int> &a, int n){
    ll arns = a[0], zum = 0;
 
    for(int i = 0; i<n; i++){
        zum += a[i];
        arns = max(arns, zum);
        zum = max(zum, 0LL);
    }
    return arns;
}
 
int main(){
    ll n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i<n; i++){
        ll aux; cin >> aux;
        v[i] = aux;
    }
 
    cout << kadane(v, n);
}