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
  ll q;
  cin >> q;
 
  bool rev = false;
  for(ll i = 0; i < q; i++){
    ll t;
    cin >> t;
    if(t == 1){
      if(rev) rev = false;
      else rev = true;
    }else{
      ll f;
      char c;
      cin >> f >> c;
      if(f == 1){
        if(rev == false) s.insert(s.begin(), c);
        else s.pb(c);
      }else{
        if(rev == false) s.pb(c);
        else s.insert(s.begin(), c);
      }
    }
    //cout << s << endl;
  }
 
  if(rev) reverse(all(s));
 
  cout << s << endl;
  return 0;
}