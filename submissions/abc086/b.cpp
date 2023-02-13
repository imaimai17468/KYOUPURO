#include <bits/stdc++.h>
using namespace std;

int main(){
    string a, b;
    cin >> a >> b;
    string c = a + b;
    int ans;
    ans = atoi(c.c_str());
    for(int i = 0; i < 1100; i++){
        if(i * i == ans){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
