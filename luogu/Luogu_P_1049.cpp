#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 10 ;
int v, n ;
int vec[N], dp[N] ;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> v >> n ;
    for(int i = 1 ; i <= n ; i ++) cin >> vec[i] ;

    for(int i = 1 ; i <= n ; i ++){
        for(int j = v ; j >= vec[i] ; j --){
            dp[j] = max(dp[j], dp[j - vec[i]] + vec[i]) ;
        }
    }

    cout << v - dp[v] << endl ;

    return 0 ;
}