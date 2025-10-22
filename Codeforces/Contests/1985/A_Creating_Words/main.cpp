#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    for(int i =0; i<t; i++){
        string a,b;
        cin >> a >> b;
        swap(a[0], b[0]);
        cout << a << " " << b << endl;
    }
}