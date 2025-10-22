#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    long long y, x; cin >> y >> x;
 
    long long num = 1, max_distance = max(y, x);
    long long dos = (max_distance*2)-2;
    num = (dos/2)*((dos/2)+1);
    num += 1;
    long long arns = -1;
 
    if(x == y){
        cout << num << endl; return;
    }
 
    if(max_distance%2 == 0){
        if(max_distance == y){
            arns = num + (y-x);
        }
        else arns = num - (x-y);
    }
    else{
        if(max_distance == y){
            arns = num - (y-x);
        }
        else arns = num + (x-y);
    }
    cout << arns << endl; return;
 
}
 
int main(){
    int t; cin >> t;
    while(t--) solve();
}