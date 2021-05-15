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
  ll n, k;
  cin >> n >> k;
  vector<ll> x(n);
  for(ll i = 0; i < n; i++) cin >> x[i];

  ll l = 0, r = k-1;
  ll ans = 10000000000;
  for(ll i = 0; i < n - k + 1; i++){
    l = i;
    ans = min({ans, abs(x[r])+abs(x[r]-x[l]), abs(x[l])+abs(x[l]-x[r])});
    r++;
  }

  cout << ans << endl;
  return 0;
}