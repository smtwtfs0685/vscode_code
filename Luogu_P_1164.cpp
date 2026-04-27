#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10 ;
int n, m ;
int dp[N], a[N] ;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m ;
    for(int i = 1 ; i <= n ; i ++) cin >> a[i] ;

    dp[0] = 1 ;
    for(int i = 1 ; i <= n ; i ++){
        for(int j = m ; j >= a[i] ; j --){
            dp[j] = dp[j - a[i]] + dp[j] ;
        }
    }

    cout << dp[m] << endl ;

    return 0 ;
}