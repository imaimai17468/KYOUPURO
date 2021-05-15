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

  ll base = 1;
  string ans = "";
  while(n){
    if(n % 2 == 0) ans = "0" + ans;
    else{
      n--;
      ans = "1" + ans;
    }
    n /= -2;
  }
  if(ans == "") ans = "0";
  cout << ans << endl;
  return 0;
}