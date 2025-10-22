#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int N, K;
    cin >> N >> K;
    for(int i = ceil(K/N); i >= 1; i--){
        if((i*N)+N-1<=K){
            cout << i;
            return 0;
        }
    }
}