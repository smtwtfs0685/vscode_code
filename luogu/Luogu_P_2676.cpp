#include <iostream>
#include <algorithm>
using namespace std;

const int N=1e6;
int n,b,h[N],cnt,sum;

int main(){
    cin >> n >> b ;
    for(int i=1 ; i<=n ; i++) cin >> h[i] ;
    sort(h+1,h+1+n);
    for(int i=n ; i>=1 ; i--){
        cnt++;
        sum += h[i] ;
        if(sum >= b) break ;
    }
    cout << cnt << endl ;
    return 0;
}