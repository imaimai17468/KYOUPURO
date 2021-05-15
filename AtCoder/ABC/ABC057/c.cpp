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
ll stringcount(string s, char c){return count(s.cbegin(), s.cend(), c);}

ll cnt_digit(ll n){
  ll digit = 0;
  while(n > 0){
    n /= 10, digit++;
  }
  return digit;
}

int main(){
  ll n;
  cin >> n;

  ll ans = cnt_digit(n);
  for(ll i = 1LL; i*i <= n; i++){
    if(n % i == 0){
      ll b = n / i;
      ll digit = max(cnt_digit(b), cnt_digit(i));
      ans = min(ans, digit);
    }
  }
  cout << ans << endl;
  return 0;
}