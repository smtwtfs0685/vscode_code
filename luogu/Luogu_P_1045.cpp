#include <iostream>
#include <cmath>
using namespace std ;

const int N=1e6;
int n,a[N],ans[N];

void m1(){
    int tmp[1010] = {0} ;
    for(int i=0 ; i<500 ; i++){
        for(int j=0 ; j<500 ; j++){
            tmp[i+j] += ans[i]*a[j] ;
        }
    }
    int t = 0 ;
    for(int i=0 ; i<500 ; i++){
        tmp[i] += t ;
        ans[i] = tmp[i] % 10 ;
        t = tmp[i] / 10 ;
    }
}

void m2(){
    int tmp[1010] = {0} ;
    for(int i=0 ; i<500 ; i++){
        for(int j=0 ; j<500 ; j++){
            tmp[i+j] += a[i]*a[j] ;
        }
    }
    int t = 0 ;
    for(int i=0 ; i<500 ; i++){
        tmp[i] += t ;
        a[i] = tmp[i] % 10 ;
        t = tmp[i] / 10 ;
    }
}

void qpow(int p){
    ans[0] = 1 ;
    a[0] = 2 ;
    while(p){
        if(p & 1) m1();
        m2();
        p >>= 1 ;
    }
}

int main(){
    cin >> n ;
    int l = n*log10(2)+1;
    cout << l << endl ;
    qpow(n);
    ans[0] -= 1 ;
    int cnt = 0 ;
    for(int i=499 ; i>=0 ; i--){
        if(cnt == 50){
            cout << endl ;
            cnt = 0 ;
        }
        cout << ans[i] ;
        cnt++;
    }
    return 0;
}