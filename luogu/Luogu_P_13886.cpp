#include <bits/stdc++.h>
using namespace std;

int ans ;

void dfs(int x, int a, int b){
    if(x == 7){
        if(a == 0 && b == 0) ans ++ ;
        return ;
    }

    int rest = 6 - x ;
    for(int i = 0 ; i <= a ; i ++){
        for(int j = 0 ; j <= b ; j ++){
            int sum = i + j ;
            if(sum < 2 || sum > 5) continue ;

            int na = a - i, nb = b - j ;
            if(na + nb < rest * 2 || na + nb > rest * 5) continue ;

            dfs(x + 1, na, nb) ;
        }
    }
}

int main(){
    dfs(0, 9, 16) ;
    cout << ans << endl ;
    return 0 ;
}