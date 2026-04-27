#include <bits/stdc++.h>
using namespace std;

int n, m ;
int a[50] ;

void dfs(int x, int start){
    if(x > m){
        for(int i = 1 ; i <= m ; i ++){
            cout << a[i] ;
            if(i != m) cout << " " ;
        }
        cout << '\n' ;
        return ;
    }

    for(int i = start ; i <= n ; i ++){
        a[x] = i ;
        dfs(x + 1, i + 1) ;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m ;

    dfs(1, 1) ;
    return 0 ;
}