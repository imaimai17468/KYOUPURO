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
 
bool compare_by_b(pair<ll, ll> a, pair<ll, ll> b) {
  if(a.second != b.second){
    return a.second < b.second;
  }else{
    return a.first < b.first;
  }
}
 
int main(){
  ll n;
  cin >> n;
  vector<pair<ll, ll>> p(n);
  for(ll i = 0; i < n; i++){
    ll x, l;
    cin >> x >> l;
    p[i] = {x-l, x+l};
  }
  sort(all(p), compare_by_b);
 
 
  ll ans = 0;
  ll right = -10000000000;
  for(ll i = 0; i < n; i++){
    if(right > p[i].first) continue;
    ans++;
    right = p[i].second;
  }
  cout << ans << endl;
  return 0;
}