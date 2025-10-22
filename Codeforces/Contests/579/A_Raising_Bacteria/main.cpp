#include<bits/stdc++.h>
using namespace std;
 
string decimalToBinary(int decimal) {
    string binary = "";
    while(decimal > 0) {
        int rem = decimal % 2;
        binary = to_string(rem) + binary;
        decimal /= 2;
    }
    return binary;
}
 
 
int main(){
    int n;
    cin >> n;
    string binary = decimalToBinary(n);
    int ansr = count(binary.begin(), binary.end(),'1');
    cout << ansr;
}