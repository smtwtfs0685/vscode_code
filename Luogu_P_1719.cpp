#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n ;
    cin >> n ;
    vector<vector<int>> a(n + 1, vector<int>(n + 1, 0)) ;
    vector<vector<int>> p(n + 1, vector<int>(n + 1, 0)) ;
    long long ans = INT_MIN ;
    for(int i = 1 ; i <= n ; i ++){
        for(int j = 1 ; j <= n ; j ++){
            cin >> a[i][j] ;
        }
    }

    for(int i = 1 ; i <= n ; i ++){
        for(int j = 1 ; j <= n ; j ++){
            p[i][j] = p[i - 1][j] + p[i][j - 1] - p[i - 1][j - 1] + a[i][j] ;
            ans = max(ans, p[i][j]) ;
        }
    }

    cout << ans << endl ;

    return 0; 
}