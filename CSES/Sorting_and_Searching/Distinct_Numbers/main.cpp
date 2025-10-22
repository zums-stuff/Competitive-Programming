#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> st;
 
    int n;
    cin >> n;
    int temp;
 
    for(int i = 0; i<n; i++){
        cin >> temp;
        st.insert(temp);
    }
 
    cout << st.size() << endl;
}