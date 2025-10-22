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
    int l = -1, r = -1;
    bool afecta = false;
 
    fori(i,0,n){
        int aux; cin >> aux;
        v.push_back(aux);
    }
    bool unCero = false;
    if(count(v.begin(), v.end(), 0) == 1) unCero = true;
 
    if(unCero){
        int real_zum = 0;
        fori(i, 0, n){
            real_zum += v[i];
        }
        int gauss = (n*(n+1))/2;
        
        if(gauss-real_zum != find(v.begin(), v.end(), 0)-v.begin() +1){
            afecta = true;
        }
    }
 
    fori(i,0,n){
        if(unCero){
            if(afecta){
                if(v[i] != i+1){
                    l = i;
                    break;
                }
            }
            else{
                if(v[i] != i+1 && v[i] != 0){
                    l = i;
                    break;
                }
            }
        }
        else{
            if(v[i] != i+1){
                l = i;
                break;
            }
        }
    }
 
    for(int i = n-1; i>=0; i--){
        if(unCero){
            if(afecta){
                if(v[i] != i+1){
                    r = i;
                    break;
                }
            }
            else{
                if(v[i] != i+1 && v[i] != 0){
                    r = i;
                    break;
                }
            }
        }
        else{
            if(v[i] != i+1){
                r = i;
                break;
            }
        }
    }
    if(r != -1)
        cout << r - l + 1 << endl;
    else cout << 0 << endl;
}
 
int main(){
    int t; cin >> t;
    while(t--) solve();
}