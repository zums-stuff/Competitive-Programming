#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string, int> mp;
    int n;
    int arns =0;
    string s;
    cin >> n;
    int c;
    for(int j=0; j<n; j++){
        string temp;
        cin >> c;
        for(int i = 0; i<c; i++){
            cin >> s;
            temp+=s[0];
        }
        mp[temp]++;
    }
 
    for(auto it: mp){
        if(it.second == 1){
            arns++;
        }
    }
    cout << arns;
}