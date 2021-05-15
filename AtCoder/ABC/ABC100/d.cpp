#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef pair<ll, ll> pll;
#define mod 1000000007
#define all(x) (x).begin(), (x).end()
#define call(x) (x).cbegin(), (x).cend()
#define pb push_back
const double PI = acos(-1);
const long long INF = (1LL << 60);
ll gcd(ll a,ll b){return b ? gcd(b,a%b) : a;}
ll lcm(ll a,ll b){return a / gcd(a,b) * b;}
ll stringcount(string s, char c){return count(s.cbegin(), s.cend(), c);}
bool isInteger(double x){return floor(x) == x;}
ll ceil(const ll a, const ll b){return ((a)+(b)-1)/b;}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);

  ll n, m;
  cin >> n >> m;
  vector<ll> x(n), y(n), z(n);
  for(ll i = 0; i < n; i++){
    cin >> x[i] >> y[i] >> z[i];
  }

  ll p[8][3] = {{0, 0, 0},
                {0, 0, 1},
                {0, 1, 0},
                {0, 1, 1},
                {1, 0, 0},
                {1, 0, 1},
                {1, 1, 0},
                {1, 1, 1}};
  
  ll ans = 0;
  for(ll i = 0; i < 8; i++){
    ll sum = 0;
    vector<ll> a;
    for(ll j = 0; j < n; j++){
      sum = 0;
      if(p[i][0] == 0) sum += x[j];
      else sum += -x[j];

      if(p[i][1] == 0) sum += y[j];
      else sum += -y[j];

      if(p[i][2] == 0) sum += z[j];
      else sum += -z[j];
      a.pb(sum);
    }
    sort(all(a), greater<ll>());
    
    ll ma = 0;
    for(ll i = 0; i < m; i++){
      ma += a[i];
    }
    ans = max(ma, ans);
  }
  cout << ans << endl;
  return 0;
}