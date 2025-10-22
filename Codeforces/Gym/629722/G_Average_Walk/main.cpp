#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int x;
    cin >> x;
    int mins = 0, pasos = 0;
    for(int i = 0; i<= 15; i++){
        mins++;
        if(pasos < 3000){
            pasos += x;
        }
        else break;
    }
 
    cout << mins-1;
}   