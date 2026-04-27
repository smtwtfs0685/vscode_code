#include <bits/stdc++.h>
using namespace std;

int n, ans ;

int digits(int s){
    int x = 0 ;
    while(s){
        x += s % 10 ;
        s /= 10 ;
    }
    return x ;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n ;
    while(n){
        n -= digits(n) ;
        ans ++ ;
    }
    cout << ans << endl ;
    return 0 ;
}