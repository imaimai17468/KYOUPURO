#include<bits/stdc++.h>
using namespace std;
 
using ll = long long;
using pll = pair<ll, ll>;
#define all(x) (x).begin(), (x).end()
#define call(x) (x).cbegin(), (x).cend()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define sz(x) ((x).size())
#define pd(a) printf("%.10f\n",a)
#define db(a) cout << "**" << a << endl;
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end())
#define rep(i, a, b) for(ll i = ll(a); i < ll(b); i++)
ll gcd(ll a,ll b){return b ? gcd(b,a%b) : a;}
ll lcm(ll a,ll b){return a / gcd(a,b) * b;}
ll ceil(ll a, ll b){return ((a)+(b)-1)/b;}
template<class T> inline bool chmax(T &a, const T &b){ if(a < b){ a=b; return 1; } return 0; }
template<class T> inline bool chmin(T &a, const T &b){ if(a > b){ a=b; return 1; } return 0; }

int main(){
  ll m, n, k;
  cin >> m >> n >> k;

  vector<string> joi(m);
  rep(i, 0, m) cin >> joi[i];

  vector<vector<ll>> sj(m+1, vector<ll>(n+1, 0)), so(m+1, vector<ll>(n+1, 0)), si(m+1, vector<ll>(n+1, 0));
  rep(i, 0, m) rep(j, 0, n) sj[i+1][j+1] = sj[i][j+1] + sj[i+1][j] - sj[i][j] + (joi[i][j] == 'J');
  rep(i, 0, m) rep(j, 0, n) so[i+1][j+1] = so[i][j+1] + so[i+1][j] - so[i][j] + (joi[i][j] == 'O');
  rep(i, 0, m) rep(j, 0, n) si[i+1][j+1] = si[i][j+1] + si[i+1][j] - si[i][j] + (joi[i][j] == 'I');
  
  // rep(i, 0, m){
  //   rep(j, 0, n){
  //     cout << sj[i][j];
  //   }
  //   cout << endl;
  // }

  rep(i, 0, k){
    ll x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    x1--, y1--;
    cout << sj[x2][y2] - sj[x1][y2] - sj[x2][y1] + sj[x1][y1] << " ";
    cout << so[x2][y2] - so[x1][y2] - so[x2][y1] + so[x1][y1] << " ";
    cout << si[x2][y2] - si[x1][y2] - si[x2][y1] + si[x1][y1] << endl;
  }

  return 0;
}