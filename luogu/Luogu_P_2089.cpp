#include <iostream>
using namespace std;

const int N=1e5;
int kind,n,m[N][10],t[10];

void ff(int total, int a){
    if(a == 10){
        if(total == n){
            for(int i=0 ; i<10 ; i++) m[kind][i] = t[i] ;
            kind++;
        }
    }
    else if(a < 10 && total < n){
        for(int i=1 ; i<=3 ; i++){
            t[a] = i ;
            ff(total + i, a + 1) ;
        }
    }
}

int main(){
    cin >> n ;
    ff(0,0);
    cout << kind << endl ;
    for(int i=0 ; i<kind ; i++){
        for(int j=0 ; j<10 ; j++){
            cout << m[i][j] << " " ;
        }
        cout << endl ;
    } 
    return 0;
}