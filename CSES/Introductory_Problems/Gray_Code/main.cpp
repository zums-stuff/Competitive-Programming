#include <bits/stdc++.h>
using namespace std;
 
vector<string> grayCode(int n){
    if(n == 1)
        return {"0", "1"};
    
    vector<string> prev = grayCode(n-1);
    vector<string> result;
 
    for(auto &s : prev){
        result.push_back("0"+s);
    }
 
    for(int i = prev.size()-1; i>=0; i--){
        result.push_back("1"+ prev[i]);
    }
    return result;
}
 
int main(){
    int n;
    cin >> n;
    vector<string> gray = grayCode(n);
    for(auto &s : gray){
        cout << s << endl;
    }
}