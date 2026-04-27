#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<string> g(n);
    for (int i = 0; i < n; i++) cin >> g[i];

    int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[8] = {-1,  0,  1, -1, 1, -1, 0, 1};

    unordered_map<int, int> cnt; 

    queue<pair<int, int>> q;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (g[i][j] != '*') continue;

            int sz = 0;
            g[i][j] = '.'; 
            q.push({i, j});

            while (!q.empty()) {
                auto [x, y] = q.front();
                q.pop();
                sz++;

                for (int k = 0; k < 8; k++) {
                    int nx = x + dx[k];
                    int ny = y + dy[k];

                    if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
                    if (g[nx][ny] != '*') continue;

                    g[nx][ny] = '.';
                    q.push({nx, ny});
                }
            }

            cnt[sz]++;
        }
    }

    int galaxy_count = 0;
    long long max_galaxy_size = 0;

    for (auto &p : cnt) {
        int sz = p.first;      
        int num = p.second;     
        galaxy_count++;
        max_galaxy_size = max(max_galaxy_size, 1LL * sz * num);
    }

    cout << galaxy_count << ' ' << max_galaxy_size << '\n';

    return 0;
}