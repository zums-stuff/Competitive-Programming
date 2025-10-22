#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    long long n;
    cin >> n;
    if(n<2){
        cout << 0 << endl;
        return;
    }
    else if(n==2){
        cout << 1 << endl;
        return;
    }
 
    long long arns = 0;
    while(n>2){
        long long zum = 5;
        long long act = 2;
        while(n>= zum + act){
            act+=zum;
            zum+=3;
        }
        n-=act;
        arns++;
    }
    if(n>=2) arns++;
    cout << arns << endl;
}
 
int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}