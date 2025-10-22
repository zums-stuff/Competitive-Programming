#include <bits/stdc++.h>
using namespace std;
 
const int MOD = 1e9 + 7;
 
int main() {
    int n, k;
    cin >> n >> k;
 
    vector<vector<int>> dp(k + 1, vector<int>(n + 1, 0));
 
    for (int i = 1; i <= n; ++i) {
        dp[1][i] = 1;
    }
 
    for (int len = 1; len < k; ++len) {
        for (int x = 1; x <= n; ++x) {
            if (dp[len][x] == 0) continue;
            for (int y = x; y <= n; y += x) {
                dp[len + 1][y] = (dp[len + 1][y] + dp[len][x]) % MOD;
            }
        }
    }
 
    int result = 0;
    for (int i = 1; i <= n; ++i) {
        result = (result + dp[k][i]) % MOD;
    }
 
    cout << result << endl;
    return 0;
}