#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std ;

const int N=1e4;
int n,h[N];
long long ans;

int main(){
    cin >> n ;
    for(int i=0 ; i<n ; i++) cin >> h[i] ;
    sort(h, h+n) ;
    int l=0, r=n-1, cnt=1, last=0 ;
    for(int i=0 ; i<n ; i++){
        if(cnt % 2 == 1){
            cnt ++ ;
            ans += pow(h[r] - last, 2) ;
            last = h[r] ;
            r -- ;
        }
        else if(cnt % 2 == 0){
            cnt ++ ;
            ans += pow(h[l] - last, 2) ;
            last = h[l] ;
            l ++ ;
        }
    }
    cout << ans << endl ;
    return 0 ;
}