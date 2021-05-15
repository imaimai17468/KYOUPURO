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
    vector<string> s(n);
    for(ll i = 0; i < n; i++) cin >> s[i];
    sort(all(s));
 
    vector<pair<ll, string>> p(n);
    ll cnt = 0;
    for(ll i = 0; i < n; i++){
        if(i > 0 && s[i] == s[i-1]){
            cnt++;
        }else{
            cnt = 0;
        }
        p[i].first = cnt, p[i].second = s[i];
    }
 
    sort(p.begin(), p.end(), greater<pair<ll, string>>());
 
    vector<string> ans(n);
    for(ll i = 0; i < n; i++){
        ans[i] = p[i].second;
        if(p[i].first == p[i+1].first){
            continue;
        }else{
            break;
        }
    }
 
    sort(all(ans));
    for(ll i = 0; i < ans.size(); i++){
      if(ans[i] == "") continue;
      cout << ans[i] << endl;
    }
    return 0;
}