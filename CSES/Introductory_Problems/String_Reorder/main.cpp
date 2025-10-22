#include <bits/stdc++.h>
using namespace std;
 
bool puedeConstruir(const map<char,int>& freq, int restantes) {
    int maxf = 0;
    for (auto& [_, f] : freq) maxf = max(maxf, f);
    return maxf <= (restantes + 1) / 2;
}
 
int main() {
    string s; cin >> s;
    int n = s.size();
    map<char,int> freq;
    for (char c : s) freq[c]++;
    
    int max_freq = 0;
    for (auto& [_, f] : freq) max_freq = max(max_freq, f);
    if (max_freq > (n+1)/2) {
        cout << -1 << "\n";
        return 0;
    }
    
    string ans;
    char last_letter = '?';
    int restantes = n;
    
    for (int i = 0; i < n; i++) {
        bool found = false;
        for (auto& [letra, f] : freq) {
            if (letra == last_letter || f == 0) continue;
            
            // Prueba usar esta letra
            freq[letra]--;
            restantes--;
            
            if (puedeConstruir(freq, restantes)) {
                ans += letra;
                last_letter = letra;
                found = true;
                break;
            }
            
            // No sirve, revertimos
            freq[letra]++;
            restantes++;
        }
        
        if (!found) {
            cout << -1 << "\n";
            return 0;
        }
    }
    
    cout << ans << "\n";
    return 0;
}