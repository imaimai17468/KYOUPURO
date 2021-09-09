#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using pll = pair<ll, ll>;
using vll = vector<ll>;
using vvll = vector<vll>;
using vpll = vector<pll>;
using graph = vector<vector<ll>>;
#define all(x) (x).begin(), (x).end()
#define call(x) (x).cbegin(), (x).cend()
#define rall(x) (x).rbegin(), (x).rend()
#define pb emplace_back
#define sz(x) ((x).size())
#define dupli(a) {sort(all(a));a.erase(unique(all(a)),a.end());}
#define rep(i, a, b) for(ll i = ll(a); i < ll(b); i++)
#define rrep(i, a, b) for(ll i = ll(a); i >= ll(b); i--)
#define debug cerr << "debug" << endl;
#define mod 1000000007
#define decimal cout<<fixed<<setprecision(15);
ll gcd(ll a,ll b){return b ? gcd(b,a%b) : a;}
ll lcm(ll a,ll b){return a / gcd(a,b) * b;}
ll ceil(ll a, ll b){return ((a)+(b)-1)/b;}
ll fac(ll a){return a ? fac(a - 1) * a : 1;}
template<class T> inline bool chmax(T &a, const T &b){ if(a < b){ a=b; return 1; } return 0; }
template<class T> inline bool chmin(T &a, const T &b){ if(a > b){ a=b; return 1; } return 0; }
template<class T> void out(T a){cout<<a<<'\n';}
template<class T> void outv(T v){rep(i,0,v.size()){if(i)cout<<' ';cout<<v[i];}cout<<'\n';}
struct corr{ll y; ll x; ll depth;};
vector<ll> ddx = {0, 0, -1, 1, 1, -1, -1, 1};
vector<ll> ddy = {-1, 1, 0, 0, 1, -1, 1, -1};
vector<ll> dx = {0,  0, 1, -1};
vector<ll> dy = {1, -1, 0,  0};
 
 
int main() {
    string s;
    cin >> s;

    string t = "chokudai";
    vector<vector<ll>> dp(sz(s) + 1, vector<ll>(sz(t) + 1, 0));
    rep(i, 0, sz(s) + 1) dp[i][0] = 1;

    rep(i, 0, sz(s)) {
        rep(j, 0, sz(t)) {
            if(s[i] != t[j]) dp[i + 1][j + 1] = dp[i][j + 1];
            else dp[i + 1][j + 1] = (dp[i][j + 1] + dp[i][j]) % mod;
        }
    }

    out(dp[sz(s)][sz(t)] % mod);
    return 0;
}