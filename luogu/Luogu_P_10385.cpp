#include <bits/stdc++.h>
using namespace std;

int a1 = 20000101, a2 = 20240413 ;
int ans ;

int main(){

    

    for(int i = l ; i <= r ; i ++){
        int cnt = 0, x = i ;
        while(x){
            int nn = x % 10 ;
            if(nn == 0) cnt += 13 ;
            else if(nn == 1) cnt += 1 ;
            else if(nn == 2 || nn == 7 || nn == 8 || nn == 9) cnt += 2 ;
            else if(nn == 3) cnt += 3 ;
            else if(nn == 4) cnt += 5 ;
            else cnt += 4 ;
            x /= 10 ;
        }
        if(cnt > 50) ans ++ ;
    }

    cout << ans ;
    return 0 ;
}