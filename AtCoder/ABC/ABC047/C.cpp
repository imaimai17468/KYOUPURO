#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define mod 1000000007
#define all(x) (x).begin(), (x).end()
#define pb push_back

const long double PI = acos(-1);

ll gcd(ll a,ll b){return b ? gcd(b,a%b) : a;}
ll lcm(ll a,ll b){return a / gcd(a,b) * b;}
ll GetDigit(ll num) {return log10(num)+1;}

int main(){
  string s;
  cin >> s;

  ll b = 0, w = 0;
  for(ll i = 0; i < s.size(); i++){
      if(s[i] == s[i+1]) continue;
      else if(s[i] == 'B') b++;
      else if(s[i] == 'W') w++;
  }
    
  if(b == 0 || w == 0) cout << 0 << endl;
  else cout << b + w - 1 << endl;

  return 0;
}