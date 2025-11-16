#include <iostream>
#include <cstring>
using namespace std;

const int N=1205;
int ans,t,n,s[N],dp[N],a[5];

int main(){
    for(int i=1 ; i<=4 ; i++) cin >> a[i] ;
    for(int i=1 ; i<=4 ; i++){
        ans = 0 ;
        for(int j=1 ; j<=a[i] ; j++){
            cin >> s[j] ;
            ans += s[j] ;
        }
        memset(dp, 0, sizeof(dp)) ;
        for(int j=1 ; j<=a[i] ; j++){
            for(int k=ans/2 ; k>=s[j] ; k--){
                dp[k] = max(dp[k] , dp[k - s[j]] + s[j]) ;
            }
        }
        t += ans - dp[ans/2] ;  
    }
    cout << t << endl ;
    return 0;
}