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

  ll n;
  cin >> n;
  vector<ll> a(n), b(n);
  for(ll i = 0; i < n; i++) cin >> a[i];
  for(ll i = 0; i < n; i++) cin >> b[i];

  ll suma = 0, sumb = 0;
  for(ll i = 0; i < n; i++){
    suma += a[i], sumb += b[i];
  }
  if(suma < sumb){
    cout << -1 << endl;
    return 0;
  }

  ll ans = 0;
  ll decsum = 0;
  bool allok = true;
  for(ll i = 0; i < n; i++){
    if(a[i] < b[i]){
      ans++;
      decsum += b[i] - a[i];
      allok = false;
    }
  }
  if(allok){
    cout << 0 << endl;
    return 0;
  }

  vector<ll> dec(n);
  for(ll i = 0; i < n; i++){
    dec[i] = a[i] - b[i];
  }
  sort(all(dec), greater<ll>());
  for(ll i = 0; i < n; i++){
    decsum -= dec[i];
    ans++;
    if(decsum <= 0) break;
  }

  cout << ans << endl;
  return 0;
}