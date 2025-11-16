#include <iostream>
using namespace std;

const int N=3*1e6;
long long n,m ;
long long ans[N],q[N] ;

int main(){
    cin >> n >> m ;
    for(int i=1 ; i<=n ; i++) cin >> ans[i] ;
    for(int i=1 ; i<=m ; i++) cin >> q[i] ;
    for(int i=1 ; i<=m ; i++) cout << ans[q[i]] << endl ;
    return 0 ;
}