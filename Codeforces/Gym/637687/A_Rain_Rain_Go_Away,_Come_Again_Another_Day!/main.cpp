#include<bits/stdc++.h>
using namespace std;
 
void printVector(vector<int> arr){
    for(int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
}
 
void solve(){
    int n; cin >> n;
    vector<int> v(n);
    int l = 0, r = 0;
    vector<int> maxi(n);
    vector<int> mini(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    maxi[0] = v[0];
    mini[n-1] = v[n-1];
    for(int i = 1; i < n; i++){
        maxi[i] = max(v[i], maxi[i-1]);
    }
    for(int i = n-2; i >= 0; i--){
        mini[i] = max(v[i], mini[i+1]);
    }
    long long arns = 0;
    for(int i = 0; i < n; i ++){
        arns += min(maxi[i], mini[i]) - v[i];
    }
 
    cout << arns << endl;
}
 
int main(){
    int t; cin >> t;
    while(t--) solve();
}