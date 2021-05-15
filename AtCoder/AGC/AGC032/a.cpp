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
  vector<ll> b(n);
  for(ll i = 0; i < n; i++) cin >> b[i];

  vector<ll> ans;
  for(ll i = 0; i < n; i++){
    bool ok = false;
    for(ll j = b.size(); j > 0; j--){
      if(b[j-1] == j){
        ans.pb(j);
        b.erase(b.begin()+j-1);
        ok = true;
        break;
      }
    }
    if(!ok){
      cout << -1 << endl;
      return 0;
    }
  }

  reverse(all(ans));
  for(auto a : ans) cout << a << endl;

  return 0;
}