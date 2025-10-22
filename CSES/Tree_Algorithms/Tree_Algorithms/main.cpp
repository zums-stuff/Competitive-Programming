#include<bits/stdc++.h>
using namespace std;
 
const int MAX = 2e5+2;
 
vector<int> depth(MAX,0);
vector<vector<int>> tree(MAX);
 
void dfs(int root, int pred){
    depth[root] = 1;
    for(int i = 0; i < tree[root].size(); i++){
        if(pred == root) continue;
        
        dfs(tree[root][i], root);
        depth[root] += depth[tree[root][i]];
    }
}
 
int main(){
    int n; cin >> n;
    for(int i = 2; i <= n; i++){
        int aux; cin >> aux;
        tree[aux].push_back(i);
    }
    dfs(1, 0);
 
    for(int i = 1; i<= n; i++){
        cout << depth[i]-1 << " ";
    }
}