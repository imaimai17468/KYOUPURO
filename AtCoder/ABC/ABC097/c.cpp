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
  string s;
  cin >> s;
  ll k;
  cin >> k;

  vector<string> t;
  for(ll i = 1; i <= k; i++){
    for(ll j = 0; j < s.size()-i+1; j++){
      string b = s.substr(j, i);
      t.pb(b);
    }
  }
  sort(all(t));
  t.erase(unique(all(t)), t.end());
  cout << t[k-1] << endl;
  return 0;
}