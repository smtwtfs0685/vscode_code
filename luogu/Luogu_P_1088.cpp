#include <iostream>
#include <algorithm>
using namespace std;

const int N=1e5;
int f[N];

int main(){
    int n,m;
    cin >> n >> m ;
    for(int i=1 ; i<=n ; i++) cin >> f[i] ;
    
    for(int i=1 ; i<=m ; i++) next_permutation(f+1, f+1+n) ;

    for(int i=1 ; i<=n ; i++) cout << f[i] << " " ;
    return 0 ;
}