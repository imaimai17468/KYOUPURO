#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef pair<int, int> P;
 
#define mod 1000000007
#define inf 1000000000
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define popcount(x) __builtin_popcountll(x)
 
const long double PI = acos(-1);
 
ll gcd(ll a,ll b){return b ? gcd(b,a%b) : a;}
ll lcm(ll a,ll b){return a / gcd(a,b) * b;}

int main(){
  ll n;
  cin >> n;
  vector<ll> a(n), b(n), c(n);
  for(ll i = 0; i < n; i++) cin >> a[i];
  for(ll i = 0; i < n; i++) cin >> b[i];
  for(ll i = 0; i < n; i++) cin >> c[i];
  sort(all(a)); sort(all(b)); sort(all(c));
  
  ll ans = 0;
  for(ll i = 0; i < n; i++){
    ll itr1 = upper_bound(all(c), b[i]) - c.begin();
    ll itr2 = lower_bound(all(a), b[i]) - a.begin();
    ans += (n - itr1) * itr2;
  }
  cout << ans << endl;
  return 0;
}