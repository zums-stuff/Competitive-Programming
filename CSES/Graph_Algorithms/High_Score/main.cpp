#include<bits/stdc++.h>
using namespace std;
using ll = long long;
 
const ll INF = 1e18; 
 
struct Edge{
    int a, b;
    ll cost;
};
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
 
    vector<Edge> edges(m);
 
    for (int i = 0; i < m; ++i) {
        cin >> edges[i].a >> edges[i].b >> edges[i].cost;
        edges[i].cost *= -1; 
    }
 
    vector<ll> dist(n + 1, INF);
    dist[1] = 0;
 
    for (int i = 1; i <= n; ++i) {
        for (const auto& e : edges) {
            if (dist[e.a] == INF) continue;
 
            if (dist[e.a] + e.cost < dist[e.b]) {
                dist[e.b] = dist[e.a] + e.cost;
            }
        }
    }
 
    ll ans = dist[n];
 
    for (int i = 1; i <= n; ++i) {
        for (const auto& e : edges) {
            if (dist[e.a] == INF) continue;
 
            if (dist[e.a] + e.cost < dist[e.b]){
                dist[e.b] = -INF; 
            }
        }
    }
 
    if(dist[n] != ans || dist[n] == -INF){
        cout << -1 << "\n";
    } else{
        cout << -ans << "\n";
    }
 
    return 0;
}