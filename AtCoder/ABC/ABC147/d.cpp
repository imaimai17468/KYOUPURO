#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef pair<ll, ll> pll;
#define mod 1000000007
#define all(x) (x).begin(), (x).end()
#define call(x) (x).cbegin(), (x).cend()
#define pb push_back
const long double PI = acos(-1);
const long long INF = (1 << 30);
ll gcd(ll a,ll b){return b ? gcd(b,a%b) : a;}
ll lcm(ll a,ll b){return a / gcd(a,b) * b;}
ll stringcount(string s, char c){return count(s.cbegin(), s.cend(), c);}
bool isInteger(double x){return floor(x) == x;}
ll ceil(const ll a, const ll b){return ((a)+(b)-1)/b;}


int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);

  ll n;
  cin >> n;
  vector<ll> a(n);
  for(ll i = 0; i < n; i++) cin >> a[i];

  ll ans = 0;
  for(ll i = 0; i < 60; i++){
    ll o = 0, e = 0;
    for(ll j = 0; j < n; j++){
      if((a[j] >> i) & 1) o++;
      else e++;
    }

    ll res = 0;
    res = 1LL << i;
    res %= mod;
    res *= (e * o) % mod;
    ans += res;
    ans %= mod;
  }
  cout << ans << endl;
  return 0;
}