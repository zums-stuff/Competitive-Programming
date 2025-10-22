#include<bits/stdc++.h>
using namespace std;
 
void solve(string s){
    string p; cin >> p;
    if(p.size() % s.size() != 0){
        cout << "No" << endl;
        return;
    }
    string prueba = "";
 
    for(int i = 0; i<p.size() / s.size(); i++){
        prueba += s;
    }
    if(prueba == p){
        cout << "Yes" << endl;
        return;
    }
    else{
        cout << "No" << endl;
        return;
    }
}
 
int main(){
    string base; cin >> base;
    int n; cin >> n;
 
    while(n--){
        solve(base);
    }
}