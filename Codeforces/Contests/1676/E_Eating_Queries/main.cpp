#include<bits/stdc++.h>
using namespace std;
 
 
void solve(){
    int n, q;
    cin >> n >> q;
 
    vector<int> sug;
 
    for(int i=0; i<n; i++){
        int aux;
        cin >> aux;
        sug.push_back(aux);
    }
 
    sort(sug.begin(), sug.end(), greater<>());
    bool ya = false;
        vector<int> sum;
        int s=0;
        for(int j=0; j<n; j++){
            s+= sug[j];
            sum.push_back(s);
        }
    while(q--){
        int x; cin >> x;
        
    
        auto it = lower_bound(sum.begin(), sum.end(), x);
        
        if(it == sum.end()){
            cout << -1 << endl;
        }
        else{
            cout << it-sum.begin()+1<< endl;
        }
 
    }
    return;
}
 
int main(){
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}