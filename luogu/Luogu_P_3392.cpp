#include <iostream>
#include <algorithm>
using namespace std;

int n,m,w[55],b[55],r[55],ans=10000;
string s;

int check(char c){
    int cnt = 0 ;
    for(int i=0 ; i<m ; i++){
        if(s[i] != c) cnt++ ;
    }
    return cnt ;
}

int main(){
    cin >> n >> m ;
    for(int i=1 ; i<=n ; i++){
        cin >> s ;
        w[i] = w[i - 1] + check('W') ;
        b[i] = b[i - 1] + check('B') ;
        r[i] = r[i - 1] + check('R') ;
    }

    for(int i=1 ; i<n-1 ; i++){
        for(int j=i+1 ; j<n ; j++){
            ans = min(ans, w[i]+b[j]-b[i]+r[n]-r[j]) ;
        }
    }

    cout << ans << endl ;
    return 0;
}