#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n, q;
    cin >> n >> q;
    vector<int> v;
    for(int i=0; i<n; i++){
        int aux;
        cin >> aux;
        v.push_back(aux);
    }
    vector<int> prefix(n+1, 0);
    for(int i = 1; i<=n; i++){
        prefix[i] =prefix[i-1]^v[i-1];
    }
 
    while(q--){
        int l, r;
        cin >> l >> r;
        int ansr = prefix[r] ^ prefix[l-1];
        cout <<  ansr << endl;
    }
 
}