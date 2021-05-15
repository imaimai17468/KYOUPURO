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

  ll n, k;
  cin >> n >> k;
  vector<ll> a(n);
  for(ll i = 0; i < n; i++) cin >> a[i];

  ll ans = 0;
  for(ll i = 0; i < n; i++){
    ll cnt = 0;
    for(ll j = i + 1; j < n; j++){
      if(a[i] > a[j]) cnt++;
    }
    cnt *= k % mod;
    ans += cnt % mod;
    ans %= mod;
  }

  for(ll i = 0; i < n; i++){
    ll cnt = 0;
    for(ll j = 0; j < n; j++){
      if(a[i] > a[j]) cnt++;
    }
    cnt *= (k * (k-1))/2 % mod;
    ans += cnt % mod;
    ans %= mod;
  }
  cout << ans << endl;
  return 0;
}