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
 
bool IsPrime(int num){
  if (num < 2) return false;
  else if (num == 2) return true;
  else if (num % 2 == 0) return false;
  double sqrtNum = sqrt(num);
  for (int i = 3; i <= sqrtNum; i += 2){
    if (num % i == 0){
      return false;
    }
  }
  return true;
}
 
int main(){
  ll n;
  cin >> n;
  vector<ll> a(n, 0);
  for(ll i = 0; i < n; i++) cin >> a[i];
 
  bool ok = true;
  for(ll i = 0; i < n; i++){
    if(a[i] % 2 == 0){
      if(a[i] % 3 == 0 || a[i] % 5 == 0){
        continue;
      }else{
        ok = false;
      }
    }
  }
 
  if(ok == false){
    cout << "DENIED" << endl;
  }else{
    cout << "APPROVED" << endl;
  }
  return 0;
}