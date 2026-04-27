#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> step(m), b(n);
    for (int i = 0; i < m; i++) cin >> step[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    const long long NEG = -(1LL << 60);
    vector<long long> dp(n, NEG);
    dp[0] = 0;

    long long ans = NEG;

    for (int i = 0; i < n; i++) {
        if (dp[i] == NEG) continue;

        for (int j = 0; j < m; j++) {
            int nxt = i + step[j];
            if (nxt >= n) ans = max(ans, dp[i] + b[i]);
            else dp[nxt] = max(dp[nxt], dp[i] + b[i]);
        }
    }

    cout << ans << '\n';
    return 0;
}