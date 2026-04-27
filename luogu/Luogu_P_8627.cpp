#include <bits/stdc++.h>
using namespace std;

int n, ans, cnt ;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n ;

    ans = n ;
    cnt = n ;

    while(cnt >= 3){
        int t = cnt / 3 ;
        ans += t ;
        cnt = t + cnt % 3 ;
    }

    cout << ans << endl ;
    return 0 ;
}