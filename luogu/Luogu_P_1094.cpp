#include <iostream>
#include <algorithm>
using namespace std ;

const int N=1e5;
int ans,w,n,a[N];

int main(){
    cin >> w >> n ;
    for(int i=0 ; i<n ; i++) cin >> a[i] ;
    sort(a, a+n) ;
    int l=0, r=n-1 ;
    while(l <= r){
        if(a[l] + a[r] <= w){
            ans ++ ;
            l ++ ;
            r -- ;
        }
        else{
            if(a[l] >= a[r]){
                l ++ ;
                ans ++ ;
            }
            else{
                r -- ;
                ans ++ ;
            }
        }
    }
    cout << ans << endl ;
    return 0 ;
}