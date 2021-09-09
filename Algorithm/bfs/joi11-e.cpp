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
ll gcd(ll a,ll b){return b ? gcd(b,a%b) : a;}
ll lcm(ll a,ll b){return a / gcd(a,b) * b;}
ll ceil(ll a, ll b){return ((a)+(b)-1)/b;}
ll fac(ll a){return a ? fac(a - 1) * a : 1;}
template<class T> inline bool chmax(T &a, const T &b){ if(a < b){ a=b; return 1; } return 0; }
template<class T> inline bool chmin(T &a, const T &b){ if(a > b){ a=b; return 1; } return 0; }
struct corr{ll y; ll x; ll depth;};
vector<ll> dx = {0, 0, -1, 1, 1, -1, -1, 1};
vector<ll> dy = {-1, 1, 0, 0, 1, -1, 1, -1};


int main() {
    ll w, h;
    cin >> w >> h;

    graph g(h + 2, vector<ll>(w + 2));
    rep(i, 1, h+1) rep(j, 1, w+1) cin >> g[i][j];

    // debug
    // gを出力
    // for(auto x:g) {
    //     for(auto y:x) {
    //         cout << y << " ";
    //     }
    //     cout << endl;
    // }
    
    ll ans = 0;
    queue<corr> que;
    que.push(corr{0, 0, 0});
    vector<pll> dxdy_odd = {pll(-1, 0), pll(1, 0), pll(0, -1), pll(0, 1), pll(1, -1), pll(1, 1)};
    vector<pll> dxdy_even = {pll(-1, 0), pll(1, 0), pll(0, -1), pll(0, 1), pll(-1, -1), pll(-1, 1)};
    graph visited(h + 2, vector<ll>(w + 2));
    while(!que.empty()) {
        corr c = que.front(); que.pop();
        vector<pll> dxdy;
        if(visited[c.y][c.x] == 1) continue;
        else{
            // cerr << "debug [cx, cy] : " << c.x << " " << c.y << endl;
            visited[c.y][c.x] = 1;
            if(c.y % 2 == 0) dxdy = dxdy_even;
            else dxdy = dxdy_odd;
            for(auto d:dxdy) {
                ll nx = c.x + d.first;
                ll ny = c.y + d.second;
                // cerr << "debug [nx, ny] : " << nx << " " << ny << endl;
                if(nx >= 0 && nx <= w+1 && ny >= 0 && ny <= h+1) {
                    if(g[ny][nx] == 1) ans += 1;
                    else{
                        if(visited[ny][nx] == 0) que.push(corr{ny, nx, 0});
                    }
                }
            }
        }
    }
    cout << ans << endl;
}