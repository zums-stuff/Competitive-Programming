#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n, m, k; cin >> n >> m >> k;
    vector<long long> desiredSizes(n);
    vector<long long> apartments(m);
 
    for(int i = 0; i < n; i++)
        cin >> desiredSizes[i];
 
    for(int i = 0; i < m; i++)
        cin >> apartments[i];
 
    sort(desiredSizes.begin(), desiredSizes.end());
    sort(apartments.begin(), apartments.end());
 
    int arns = 0;
    int i = 0, j = 0;
    while(i < n && j < m){
        if(abs(apartments[j] - desiredSizes[i]) <= k){
            arns++;
            i++;
            j++;
        }
        else{
            if(apartments[j] < desiredSizes[i]) j++;
            else i++;
        }
    }
 
    cout << arns;
}