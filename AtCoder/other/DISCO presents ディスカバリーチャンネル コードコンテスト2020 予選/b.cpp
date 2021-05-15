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
  vector<ll> a(n, 0);
  for(ll i = 0; i < n; i++) cin >> a[i];

  ll all = 0;
  for(ll i = 0; i < n; i++){
    all += a[i];
  }

  ll ans = all, sum = 0;
  for(ll i = 0; i < n; i++){
    sum += a[i];
    ans = min(ans, abs(sum - (all - sum)));
  }
  cout << ans << endl;
  return 0;
}