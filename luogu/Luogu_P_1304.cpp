#include <iostream>
#include <cmath>
using namespace std;

bool ss(int n){
    if(n==1) return 0 ;
    if(n==2) return 1 ;
    for(int i=2 ; i<=sqrt(n) ; i++){
        if(n%i==0) return 0 ;
    }
    return 1 ;
}

int main(){
    int n;
    cin >> n ;
    for(int i=4 ; i<=n ; i+=2){
        for(int j=2 ; j<=n ; j++){
            if(ss(j)){
                if(ss(i-j)){
                    cout << i << "=" << j << "+" << i-j << endl ;
                    break ;
                }
            }
        }
    }
    return 0 ;
}