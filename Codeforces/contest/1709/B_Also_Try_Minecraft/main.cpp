#include<bits/stdc++.h>
 
int main() {
    // Optimización de entrada/salida para velocidad
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
 
    int n, m;
    std::cin >> n >> m;
 
    // Usamos vectores de tamaño n+1 para manejar fácilmente la indexación 1 a n
    // que se usa en el problema. El índice 0 no se usará.
    std::vector<long long> alturas(n + 1);
    for (int i = 1; i <= n; ++i) {
        std::cin >> alturas[i];
    }
 
    // --- Pre-cálculo para movimiento hacia la DERECHA ---
    // prefijos_derecha[i] almacenará el daño total acumulado al moverse desde la columna 1 hasta la i.
    std::vector<long long> prefijos_derecha(n + 1, 0);
    for (int i = 2; i <= n; ++i) {
        // El daño se acumula con el del paso anterior.
        // El daño de este paso es la caída de altura de i-1 a i.
        prefijos_derecha[i] = prefijos_derecha[i-1];
        if (alturas[i-1] > alturas[i]) {
            prefijos_derecha[i] += alturas[i-1] - alturas[i];
        }
    }
 
    // --- Pre-cálculo para movimiento hacia la IZQUIERDA ---
    // prefijos_izquierda[i] almacenará el daño total acumulado al moverse desde la columna n hasta la i.
    // Esto se calcula como una suma de sufijos, iterando hacia atrás.
    std::vector<long long> prefijos_izquierda(n + 2, 0); // n+2 para evitar problemas de borde en i+1
    for (int i = n - 1; i >= 1; --i) {
        // El daño se acumula con el del paso anterior (que es i+1).
        // El daño de este paso es la caída de altura de i+1 a i.
        prefijos_izquierda[i] = prefijos_izquierda[i+1];
        if (alturas[i+1] > alturas[i]) {
            prefijos_izquierda[i] += alturas[i+1] - alturas[i];
        }
    }
 
    // --- Responder a las 'm' consultas ---
    for (int k = 0; k < m; ++k) {
        int s, t;
        std::cin >> s >> t;
 
        if (s < t) {
            // Movimiento a la derecha: El daño total es el acumulado hasta t menos el acumulado hasta s.
            // Esto nos da la suma de daños solo en el rango [s, t].
            long long resultado = prefijos_derecha[t] - prefijos_derecha[s];
            std::cout << resultado << "\n";
        } else {
            // Movimiento a la izquierda: El daño total es el acumulado (desde n) hasta t
            // menos el acumulado (desde n) hasta s.
            long long resultado = prefijos_izquierda[t] - prefijos_izquierda[s];
            std::cout << resultado << "\n";
        }
    }
 
    return 0;
}