#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string s;
    cin >> s;
    char actual = 'b';
    int cnt = 1;
    int max_cnt = 0;
 
    for(char a: s){
        if(actual == a){
            cnt++;
            max_cnt = max(cnt, max_cnt);
        }
        else{
            actual = a;
            cnt = 1;
            max_cnt = max(cnt, max_cnt);
        }
    }
 
    cout << max_cnt;
}