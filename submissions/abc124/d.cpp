#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    vector<int> nums;
    int now = 1;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == (char)('0' + now))
            cnt++;
        else {
            nums.push_back(cnt);
            now = 1 - now;
            cnt = 1;
        }
    }
    if (cnt != 0) nums.push_back(cnt);

    if (nums.size() % 2 == 0) nums.push_back(0);

    int Add = 2 * k + 1;

    int ans = 0;

    int left = 0;
    int right = 0;
    int tmp = 0;

    for (int i = 0; i < nums.size(); i += 2) {
        int nextleft = i;
        int nextright = min(i + Add, (int)nums.size());

        while (nextleft > left) {
            tmp -= nums[left];
            left++;
        }

        while (nextright > right) {
            tmp += nums[right];
            right++;
        }

        ans = max(tmp, ans);
    }

    cout << ans << endl;
    return 0;
}
