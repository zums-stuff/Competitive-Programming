#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long n; cin >> n;
 
    if(n == 1){
        cout << 0 << endl;
        return 0;
    }
 
    cout << 0 << endl << 6 << endl;
    long long arns = 0, base_zum = 0;
    for(long long i = 3; i<=n; i++){
        base_zum += (long long)8;
        arns += base_zum;
        long long combi = ((((i*i)*(i*i))-(i*i))/2);
        cout << combi-arns << endl;
    }
}