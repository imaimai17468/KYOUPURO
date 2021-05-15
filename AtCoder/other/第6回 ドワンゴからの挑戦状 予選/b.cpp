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
  string s[n];
  ll time[n];
  for(ll i = 0; i < n; i++) cin >> s[i] >> time[i];
  string x;
  cin >> x;
 
  bool ok = false;
  ll ans = 0;
  for(ll i = 0; i < n; i++){
    if(ok) ans += time[i];
    if(s[i] == x) ok = true;
  }
 
  cout << ans << endl;
  return 0;
}