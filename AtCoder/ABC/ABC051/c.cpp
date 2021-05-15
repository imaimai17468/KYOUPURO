#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef pair<int, int> P;
 
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

  ll sx, sy, tx, ty;
  cin >> sx >> sy >> tx >> ty;

  ll dx = tx - sx, dy = ty- sy;
  string ans = "";
  for(ll i = 0; i < dy; i++) ans += "U";
  for(ll i = 0; i < dx; i++) ans += "R";
  for(ll i = 0; i < dy; i++) ans += "D";
  for(ll i = 0; i < dx; i++) ans += "L";
  ans += "L";
  for(ll i = 0; i < dy + 1; i++) ans+= "U";
  for(ll i = 0; i < dx + 1; i++) ans += "R";
  ans += "D";
  ans += "R";
  for(ll i = 0; i < dy + 1; i++) ans += "D";
  for(ll i = 0; i < dx + 1; i++) ans += "L";
  ans += "U";

  cout << ans << endl;
  return 0;
}