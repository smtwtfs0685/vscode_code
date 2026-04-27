#include <bits/stdc++.h>
using namespace std;

int dfs(int m, int n){
    if(m == 0) return 1 ;
    if(n == 1) return 1 ;
    if(n > m) return dfs(m, m) ;

    return dfs(m, n - 1) + dfs(m - n, n) ;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;
    cin >> t ;

    while(t -- ){
        int m, n ;
        cin >> m >> n ;
        cout << dfs(m, n) << endl ;
    }

    return 0 ;
}