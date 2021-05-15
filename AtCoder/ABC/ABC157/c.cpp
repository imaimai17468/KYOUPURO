#include <bits/stdc++.h>
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
  ll n, m;
  cin >> n >> m;
 
  vector<ll> ans(n, 0);
  bool no = false;
  for(ll i = 0; i < m; i++){
    ll s, c;
    cin >> s >> c;
    s--;
    if(n > 1 && s == 0 && c == 0) no = true;
    else if(ans[s] == 0 || ans[s] == c) ans[s] = c;
    else {
      no = true;
    }
  }
 
  if(no){
    cout << -1 << endl;
    return 0;
  }
 
  if(n > 1 && ans[0] == 0){
    ans[0] = 1;
  }
 
  for(ll i = 0; i < n; i++){
    cout << ans[i];
  }
  cout << endl;
  return 0;
}