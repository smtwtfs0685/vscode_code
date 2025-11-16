#include <iostream>
using namespace std;

const int N=1e5;
int n,k,m,a[N],ans;

bool isprime(int x){
    if(x == 1) return false;
    for(int i=2 ; i*i<=x ; i++){
        if(x % i == 0) return false;
    }
    return true;
}

void dfs(int now, int sum, int sid){
    if(now == k){
        if(isprime(sum)) ans++ ;
        return ;
    }

    for(int i=sid ; i<=n-k+now+1 ; i++){
        dfs(now+1 , sum+a[i] , i+1) ;
    }
}

int main(){
    cin >> n >> k ;
    for(int i=1 ; i<=n ; i++) cin >> a[i] ;
    dfs(0, 0, 1) ;
    cout << ans << endl ;
    return 0;
}