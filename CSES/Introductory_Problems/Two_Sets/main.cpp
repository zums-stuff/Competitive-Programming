#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long n; cin >> n;
 
    vector<long long> a, b;
    long long gauss = ((n*(n+1))/2);
 
    long long zum = 0;
    if(gauss%2 != 0) cout << "NO";
    else{
        cout << "YES" << endl;
        for(long long i = n; i>0; i--){
            if(zum + i <= gauss/2){
                a.push_back(i);
                zum += i;
            }
            else b.push_back(i);
        }
 
        cout << a.size() << endl;
        for(long long i:a){
            cout << i << " ";
        }
        cout << endl << b.size() << endl;
        for(long long i:b){
            cout << i << " ";
        }
    }
    
}