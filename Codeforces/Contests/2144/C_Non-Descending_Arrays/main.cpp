#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef __int128 sll;
typedef pair<int,int> ii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vii> vvii;
typedef vector<pll> vpll;
typedef unsigned int uint;
typedef unsigned long long ull;
typedef vector<ull> vull;
#define fi first
#define se second
#define pb push_back
#define all(v) (v.begin()),(v.end())
#define rall(v) v.rbegin(),v.rend()
#define sz(a) (int)(a.size())
#define fori(i,a,n) for(int i = a; i < n; i++)
#define endl '\n'
const int MOD = 998244353;
const int INFTY = INT_MAX;
const ll MAX_N = 1000000;
const long long NEG_INFTY = LLONG_MIN;
const long long LLINF = LLONG_MAX;
const double EPS = DBL_EPSILON;
void printVector( auto& v ){ fori(i,0,sz(v)) cout << v[i] << " "; cout << endl; }
void fastIO() { ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); }
int myCeil( int a , int b ){return ( a + b - 1) / b ;}
 
 
void solve(){
    int n; cin >> n;
    vi a; vi b;
 
    fori(i,0,n){
        int aux; cin >> aux;
        a.push_back(aux);
    }
    fori(i,0,n){
        int aux; cin >> aux;
        b.push_back(aux);
    }
 
    vii dp;
 
    ll arns = 1;
    ll dp_ns = 1;
    ll dp_s = 1;
 
    fori(i, 1, n){
        int max_prev = max(a[i-1], b[i-1]);
        int min_curr = min(a[i], b[i]);
 
        if(max_prev <= min_curr){
            ll total = (dp_ns + dp_s)%MOD;
            arns = (arns*total)%MOD;
            dp_ns = 1;
            dp_s = 1;
        }
        else{
            ll prev_a_ns = a[i-1], prev_b_ns = b[i-1];
            ll prev_a_s = b[i-1], prev_b_s = a[i-1];
 
            ll curr_a_ns = a[i], curr_b_ns = b[i];
            ll curr_a_s = b[i], curr_b_s = a[i];
 
            ll newdp_ns = 0;
            if(curr_a_ns >= prev_a_ns && curr_b_ns >= prev_b_ns){
                newdp_ns = (newdp_ns + dp_ns)%MOD;
            }
            if(curr_a_ns >= prev_a_s && curr_b_ns >= prev_b_s){
                newdp_ns = (newdp_ns + dp_s)%MOD;
            }
 
            long long newdp_s = 0;
            if (curr_a_s >= prev_a_ns && curr_b_s >= prev_b_ns) {
                newdp_s = (newdp_s + dp_ns) % MOD;
            }
            if (curr_a_s >= prev_a_s && curr_b_s >= prev_b_s) {
                newdp_s = (newdp_s + dp_s) % MOD;
            }
 
            dp_ns = newdp_ns;
            dp_s = newdp_s;
        }
    }
        ll last_total = (dp_ns + dp_s)%MOD;
        arns = (arns * last_total)%MOD;
 
        cout << arns << endl;
}
 
int main(){
    int t; cin >> t;
    while(t--) solve();
}