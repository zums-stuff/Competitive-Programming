#include <bits/stdc++.h>
using namespace std;
 
void TorresdeHanoi(int n, int o, int i, int d){
    if(n == 1){
        cout << o << " " << d << endl;
    }
    else{
        TorresdeHanoi(n-1, o, d, i);
        cout << o << " " << d << endl;
        TorresdeHanoi(n-1, i, o, d);
    }
}
 
int main(){
    int n;
    cin >> n;
    cout << (1LL << n)-1 << endl;
    TorresdeHanoi(n, 1, 2, 3);
}