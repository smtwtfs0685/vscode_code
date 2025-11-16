#include <iostream>
using namespace std;

const int N=15;
int n,s[N],b[N],ans=1e6;

void dfs(int i, int x, int y){
    if(i > n){
        if(x == 1 && y == 0) return ;
        ans = min(abs(x - y), ans) ;
        return ;
    }
    dfs(i+1, x*s[i], y+b[i]) ;
    dfs(i+1, x, y) ;
}

int main(){
    cin >> n ;
    for(int i=1 ; i<=n ; i++){
        cin >> s[i] >> b[i] ;
    }    
    dfs(1, 1, 0) ;
    cout << ans << endl ;
    return 0;
}