#include <iostream>
#include <iomanip>
using namespace std;

const int N=1e5;
int n,s[N],r,cnt;

void dfs(int k){
    if(k >= r){
        for(int i=1 ; i<=r ; i++) cout << setw(3) << s[i] ;
        cout << endl ;
        return ;
    }

    for(int i=s[k]+1 ; i<=n ; i++){
        s[k + 1] = i ;
        dfs(k + 1) ;
    }
}

int main(){
    cin >> n >> r ;
    dfs(0);
    return 0;
}