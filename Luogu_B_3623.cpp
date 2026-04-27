#include <bits/stdc++.h>
using namespace std;

int n, k ;
int a[20] ;
bool vis[20] ;

void dfs(int x){
    if(x > k){
        for(int i = 1 ; i <= k ; i ++){
            cout << a[i] ;
            if(i != k) cout << " " ;
        }
        cout << '\n' ;
        return ;
    }

    for(int i = 1 ; i <= n ; i ++){
        if(!vis[i]){
            a[x] = i ;
            vis[i] = true ;

            dfs(x + 1) ;

            vis[i] = false ;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> k ;

    dfs(1) ;
    return 0 ;
}