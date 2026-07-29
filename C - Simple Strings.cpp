#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int n = s.size();
    string ans = s;

    for (int i = 1; i < n; i++) {
        if (ans[i] == ans[i - 1]) {
            for (char c = 'a'; c <= 'z'; c++) {
                if (c != ans[i - 1] && (i == n - 1 || c != ans[i + 1])) {
                    ans[i] = c;
                    break;
                }
            }
        }
    }

    cout << ans << '\n';
    return 0;
}
