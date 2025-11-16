#include <iostream>
using namespace std ;

const int N=1e6;
int n,a[N];
long long sum ;

int main(){
    cin >> n ;
    for(int i=1 ; i<=n ; i++) cin >> a[i] ;
    for(int i=2 ; i<=n ; i++){
        if(a[i] > a[i-1]){
            sum += a[i] - a[i-1] ;
        }
    }
    cout << sum + a[1] << endl ;
    return 0 ;
}