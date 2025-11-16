#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    if(n<4 && n!=1){
        cout << "NO SOLUTION";
        return 0;
    }
 
    int i = 2;
    while(i<=n){
        cout << i << " ";
        i+=2;
    }
 
    i = 1;
    while(i<=n){
        cout << i << " ";
        i+=2;
    }
 
}