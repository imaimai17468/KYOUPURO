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

  ll k, a, b;
  cin >> k >> a >> b;

  if(a+2 >= b){
    cout << k+1 << endl;
    return 0;
  }


  ll res = a;
  k -= res-1;
  if(k % 2 == 1) k--, res++;
  res += (b-a)*(k/2);
  cout << res << endl;
  return 0;
}