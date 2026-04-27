#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n ;
    cin >> n ;

    string s = "12345678" ;
    long long ans = -1 ;
    long long best_gcd = -1 ;

    do{
        for(char i = '1' ; i <= '8' ; i ++){
            for(int j = 0 ; j <= 8 ; j ++){
                string t = s.substr(0, j) + i + s.substr(j) ;

                long long x = 0 ;
                for(char c : t){
                    x = x * 10 + (c - '0') ;
                }

                long long g = std::gcd(x, n) ;
                if(g > best_gcd || (g == best_gcd && ans > x)){
                    best_gcd = g ;
                    ans = x ;
                }
            }
        }
    }while(next_permutation(s.begin(), s.end())) ;

    cout << ans << '\n' ;
    return 0 ;
}