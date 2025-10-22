#include<bits/stdc++.h>
using namespace std;
 
int main(){
    vector<int> alice;
    vector<int> bob;
 
    for(int i = 0; i < 5; i++){
        int aux; cin >> aux;
        alice.push_back(aux);
    }
 
    for(int i = 0; i < 4; i++){
        int aux; cin >> aux;
        bob.push_back(aux);
    }
 
    sort(alice.begin(), alice.end());
    sort(bob.begin(), bob.end());
 
    for(int i = 0; i < 4; i++){
        if(alice[i] != bob[i]){
            cout << alice[i];
            return 0;
        }
    }
 
    cout << alice[4];
}