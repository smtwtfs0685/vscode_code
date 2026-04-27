#include <bits/stdc++.h>
using namespace std;

const int N = 110 ;
int t, m ;
int dp[1100], tt[N], val[N] ;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> t >> m ;

    for(int i = 0 ; i < m ; i ++) cin >> tt[i] >> val[i] ;

    for(int i = 0 ; i < m ; i ++){
        for(int j = t ; j >= tt[i] ; j --){
            dp[j] = max(dp[j], dp[j - tt[i]] + val[i]) ;
        }
    }

    cout << dp[t] << endl ;

    return 0 ;
}