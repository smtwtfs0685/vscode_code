#include <iostream>
using namespace std ;

int main(){
    int n,ans[1010]={0} ;
    cin >> n ;
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=i/2 ; j++){
            ans[i] += ans[j] ;
        }
        ans[i] ++ ;
    }
    cout << ans[n] << endl ;
    return 0 ;
}