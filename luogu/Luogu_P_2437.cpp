#include <iostream>
using namespace std;

const int N=1010;
int f[N][N],len=1;

void dfs(int x){
    for(int i=1 ; i<=len ; i++){
        f[x][i] += f[x-1][i] + f[x-2][i] ;
        if(f[x][i] > 9){
            f[x][i+1] += f[x][i] / 10 ;
            f[x][i] %= 10 ;
        }
    }
    if(f[x][len + 1]) len ++ ;
}

int main(){
    int n,m;
    cin >> m >> n ;
    f[1][1]=1 , f[2][1]=2 ;
    for(int i=3 ; i<=n-m ; i++) dfs(i) ;
    for(int i=len ; i>=1 ; i--) cout << f[n-m][i] ;
    return 0 ;
}