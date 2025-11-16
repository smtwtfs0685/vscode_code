#include <iostream>
#include <algorithm>
using namespace std;

long long n,a[1010],b[1010];

int main(){
    cin >> n ;
    for(int i=1 ; i<=n ; i++) cin >> a[i] ;
    for(int i=1 ; i<n ; i++){
        b[i] = abs(a[i+1] - a[i]) ;
    }
    sort(b+1,b+n) ;

    for(int i=1 ; i<n ; i++){
        if(b[i] != i){
            cout << "Not jolly" << endl ;
            return 0;
        }
    }
    cout << "Jolly" << endl ;
    return 0; 
}