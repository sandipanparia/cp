#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, q;
    cin >> n >> m >> q;

    vector<long long> a(n), b(m);
    long long Sa = 0, Sb = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        Sa += a[i];
    }

    for (int j = 0; j < m; j++) {
        cin >> b[j];
        Sb += b[j];
    }

    vector<long long> A(n), B(m);

    for (int i = 0; i < n; i++)
        A[i] = Sa - a[i];

    unordered_map<long long, int> freqB;

    for (int j = 0; j < m; j++) {
        B[j] = Sb - b[j];
        freqB[B[j]]++;
    }

    while (q--) {
        long long x;
        cin >> x;

        bool possible = false;

        for (int i = 0; i < n && !possible; i++) {
            if (A[i] == 0) {
                if (x == 0 && freqB.size() > 0)
                    possible = true;
            } else {
                if (x % A[i] == 0) {
                    long long needed = x / A[i];
                    if (freqB.count(needed))
                        possible = true;
                }
            }
        }

        cout << (possible ? "YES\n" : "NO\n");
    }

    return 0;
}
