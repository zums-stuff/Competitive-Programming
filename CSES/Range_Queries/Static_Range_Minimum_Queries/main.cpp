#include<bits/stdc++.h>
using namespace std;
 
// Vector original de datos y el Segment Tree
vector<long long> v, sex;
long long n; // Tamaño del arreglo original
 
void build(long long node, long long l, long long r){
    // Caso base: si el rango es un solo elemento, asigna su valor al nodo.
    if(l == r){
        sex[node] = v[l];
    }
    else{
        long long mid = (l+r)/2; // Punto medio para dividir el rango
 
        // Construye recursivamente los hijos izquierdo y derecho.
        build(2*node, l, mid);
        build(2*node + 1, mid+1, r);
 
        // Combina los resultados de los hijos. Operación de min.
        sex[node] = min(sex[2*node], sex[2*node +1]);
    }
}
 
void update(long long node, long long l, long long r, long long idx, long long val){
    // Caso base: si se encuentra el nodo hoja correspondiente al índice,
    // actualiza el valor en el vector original y en el Segment Tree.
    if(l == r){
        v[idx] = val;
        sex[node] = val;
    }
    else{
        long long mid = (l+r)/2;
 
        // Si el índice está en la primera mitad, actualiza el hijo izquierdo.
        if(l <= idx && idx <= mid) {
            update(2*node, l, mid, idx, val);
        }
        // Si el índice está en la segunda mitad, actualiza el hijo derecho.
        else {
            update(2*node +1, mid+1, r, idx, val);
        }
 
        // Actualiza el valor del nodo actual con la suma de sus hijos.
        sex[node] = min(sex[2*node], sex[2*node + 1]);
    }
}
 
 
long long query(long long node, long long tl, long long tr, long long l, long long r){
    // Si el rango del nodo está completamente fuera del rango de consulta.
    if(r < tl || tr < l) {
        return LLONG_MAX; // Retorna el elemento neutro de la suma (0).
    }
    // Si el rango del nodo está completamente dentro del rango de consulta.
    if(l <= tl && tr <= r) {
        return sex[node];
    }
 
    long long tm = (tl+tr)/2; // Punto medio del rango del nodo actual.
 
    // Combina los resultados de las llamadas recursivas en los hijos.
    // Aquí se realiza la operación de suma.
    return min(query(2*node, tl, tm, l, r), query(2*node +1, tm+1, tr, l, r));
}
 
void solve() {
    long long queries;
    cin >> n >> queries;
    
    // Redimensiona los vectores al tamaño adecuado
    v.resize(n);
    sex.resize(4 * n, LLONG_MAX);
    
    for(long long i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    // Construye el Segment Tree.
    build(1, 0, n - 1);
    
    // Procesa cada consulta.
    for(long long i = 0; i < queries; i++) {
        long long l, r;
        cin >> l >> r;
        // Llama a la función de consulta con los rangos ajustados a 0-based.
        cout << query(1, 0, n-1, l - 1, r - 1) << endl;
    }
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solve();
 
    return 0;
}