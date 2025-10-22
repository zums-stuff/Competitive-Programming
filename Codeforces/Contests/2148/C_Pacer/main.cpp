#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    long long n, m;
    cin >> n >> m;
    int pos = 0;
    long long arns = 0;
    long long temp = 0;
 
    for(long long i = 0; i < n; i++){
        long long a;
        int b;
        cin >> a >> b;
 
        arns += a-temp-1;
        if((a-temp+1)%2 == 0){
            if(pos == 0) pos = 0;
            else pos = 1;  
        }
        else{
            if(pos == 0) pos = 1;
            else pos = 0;
        }
 
        if(b != pos) arns++;
        temp = a;
        pos = b;
    }
    arns += m-temp;
    cout << arns << endl;
    
}
 
 
int main(){
    int t; cin >> t;
    while(t--) solve();
}