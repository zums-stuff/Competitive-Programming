#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n, x; cin >> n >> x;
    vector<long long> weights(n);
 
    for(int i = 0; i < n; i ++)
        cin >> weights[i];
 
    sort(weights.begin(), weights.end());
 
    int i = 0, j = n-1;
    long long arns = 0;
    while(i <= j){
        if(weights[i] + weights[j] > x){
            j--;
            arns++;
        }
        else{
            i++;
            j--;
            arns++;
        }
    }
 
    cout << arns;
}
