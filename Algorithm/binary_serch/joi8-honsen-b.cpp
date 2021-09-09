#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pll = pair<ll, ll>;
using vll = vector<ll>;
using graph = vector<vector<ll>>;
#define all(x) (x).begin(), (x).end()
#define call(x) (x).cbegin(), (x).cend()
#define rall(x) (x).rbegin(), (x).rend()
#define eb emplace_back
#define pb push_back
#define sz(x) ((x).size())
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end())
#define rep(i, a, b) for(ll i = ll(a); i < ll(b); i++)
#define debug cerr << "debug" << endl;
#define mod 1000000007
ll gcd(ll a,ll b){return b ? gcd(b,a%b) : a;}
ll lcm(ll a,ll b){return a / gcd(a,b) * b;}
ll ceil(ll a, ll b){return ((a)+(b)-1)/b;}
ll fac(ll a){return a ? fac(a - 1) * a : 1;}
template<class T> inline bool chmax(T &a, const T &b){ if(a < b){ a=b; return 1; } return 0; }
template<class T> inline bool chmin(T &a, const T &b){ if(a > b){ a=b; return 1; } return 0; }
struct corr{ll y; ll x; ll depth;};
vector<ll> ddx = {0, 0, -1, 1, 1, -1, -1, 1};
vector<ll> ddy = {-1, 1, 0, 0, 1, -1, 1, -1};
vector<ll> dx = {0,  0, 1, -1};
vector<ll> dy = {1, -1, 0,  0};

int main() {
    ll d, n, m;
    cin >> d >> n >> m;

    vll a(n+1, 0);
    rep(i, 1, n) cin >> a[i];
    a[n] = d;
    sort(all(a));

    ll ans = 0;
    rep(i, 0, m){
        ll k;
        cin >> k;
        ll it = lower_bound(all(a), k) - a.begin();
        ll dis = abs(a[it] - k);
        if(it > 0) dis = min(dis, abs(a[it - 1] - k));
        ans += dis;
    }
    cout << ans << endl;

    return 0;
}