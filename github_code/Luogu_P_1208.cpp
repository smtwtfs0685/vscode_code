#include <iostream>
using namespace std ;

const int N=1e5;
int ans,w,n,p[N];

int read(){
    int x=0, f=1 ;
    char c = getchar();
    while(c < '0' || c > '9'){
        if(c == '-') f = -1 ;
        c = getchar() ;
    }
    while(c >= '0' && c <= '9'){
        x = x * 10 + c - '0' ;
        c = getchar() ;
    }
    return x * f ;
}

int main(){
    w = read();
    n = read();
    for(int i=0 ; i<n ; i++) p[i] = read() ;
    
}