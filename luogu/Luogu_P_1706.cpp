#include <iostream>
#include <iomanip>
using namespace std;

const int N=1e4;
int n,a[N],s[N];

void dfs(int x){
    if(x == n){
        for(int i=1 ; i<=n ; i++) cout << setw(5) << a[i] ;
        cout << endl ;
        return ;
    }

    for(int i=1 ; i<=n ; i++){
        if(!s[i]){
            s[i] = 1 ;
            a[x + 1] = i ;
            dfs(x + 1) ;
            s[i] = 0 ;
        }
    }
}

int main(){
    cin >> n ;
    dfs(0);
    return 0;
}