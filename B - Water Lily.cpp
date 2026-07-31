#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long H, L;
    cin >> H >> L;
 
    double depth = (1.0 * L * L - 1.0 * H * H) / (2.0 * H);
 
    cout << fixed << setprecision(13) << depth << "\n";
 
    return 0;
}

