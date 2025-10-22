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
const int MOD = 1e9+7;
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
    vector<int> v;
    vector<int> prefix_zum; 
    for(int i = 0; i<n; i++){
        int aux; cin >> aux;
        v.push_back(aux);
    }
 
    prefix_zum.push_back(v[0]);
    for(int i = 1; i<n; i++){
        prefix_zum.push_back(prefix_zum[i-1]+v[i]);
    }
 
    for(int l = 0; l<n-2; l++){
        for(int r = l+1; r<n-1; r++){
            int s1 = prefix_zum[l]%3;
            int s2 = (prefix_zum[r] - prefix_zum[l])%3;
            int s3 = (prefix_zum[n-1]-prefix_zum[r])%3;
            if((s1 == s2 && s2 == s3) || (s1 != s2 && s2 != s3 && s1 != s3)){
                cout << l+1 << " " << r+1 << endl;
                return;
            }
        }
    }
    cout << 0 << " " << 0 << endl;
}
 
int main(){
    int t; cin >> t;
    while(t--) solve();
}