#include <iostream>
#include <algorithm>
using namespace std ;

const int N=1e6 ;
int n,a[N],ans,now;

int main(){
    cin >> n ;
    for(int i=0 ; i<n ; i++) cin >> a[i] ;
    sort(a, a+n) ;
    for(int i=0 ; i<n-1 ; i++){
        if(a[i] == a[i+1]) now = 0 ;
        else if(a[i] + 1 != a[i+1]) now = 0 ;

        
    }
}