#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef vector<pair<ll, ll>> pll;
 
#define mod 1000000007
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define popcount(x) __builtin_popcountll(x)
 
const long double PI = acos(-1);
 
ll gcd(ll a,ll b){return b ? gcd(b,a%b) : a;}
ll lcm(ll a,ll b){return a / gcd(a,b) * b;}
ll stringcount(string s, char c){return count(s.cbegin(), s.cend(), c);}
bool isInteger(double x){return floor(x) == x;}


int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);

  ll n, m;
  string s, t;
  cin >> n >> m >> s >> t;
  
  ll g = gcd(n, m);
  bool ok = true;
  ll ans = lcm(n, m);
  n /= g, m /= g;
  for(ll i = 0; i < g; i++){
    if(s[i*n] != t[i*m]) ok = false;
  }

  if(ok) cout << ans << endl;
  else cout << -1 << endl;
  return 0;
}