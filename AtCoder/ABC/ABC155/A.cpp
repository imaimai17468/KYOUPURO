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
  ll a, b, c;
  cin >> a >> b >> c;
 
  if(a == b && c != a && c != b){
    cout << "Yes" << endl;
  }else if(a == c && b != a && b != c){
    cout << "Yes" << endl;
  }else if(b == c && a != c && a != b){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
  return 0;
}
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
  ll a, b, c;
  cin >> a >> b >> c;

  if(a == b && c != a && c != b){
    cout << "Yes" << endl;
  }else if(a == c && b != a && b != c){
    cout << "Yes" << endl;
  }else if(b == c && a != c && a != b){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
  return 0;
}
提出情報
提出日時	2020-02-16 21:02:48
問題