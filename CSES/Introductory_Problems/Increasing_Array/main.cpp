#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    vector<long long> v(n);
 
    for(int i = 0; i<n; i++){
        long long aux;
        cin >> aux;
        v[i] = aux;
    }
 
    long long arns = 0;
 
    for(int i = 1; i<n; i++){
        if(v[i] - v[i-1] < 0){
            arns += v[i-1] - v[i];
            v[i] = v[i-1];
        }
    }
 
    cout << arns;
}