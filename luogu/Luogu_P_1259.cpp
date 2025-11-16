#include <iostream>
using namespace std ;

int n;
char ch[1010];

void output(){
    for(int i=0 ; i<2*n+2 ; i++){
        putchar(ch[i]) ;
    }
    putchar('\n') ;
}

void movechess(int start, int end){
    swap(ch[start], ch[end]) ;
    swap(ch[start + 1], ch[end + 1]) ;
    output() ;
}

string out[4] = {"ooo*o**--*", "o--*o**oo*", "o*o*o*--o*", "--o*o*o*o*"} ;

int main(){
    cin >> n ;
    for(int i=0 ; i<n ; i++) ch[i] = 'o' ;
    for(int i=n ; i<2*n ; i++) ch[i] = '*' ;
    for(int i=2*n ; i<2*n+2 ; i++) ch[i] = '-' ;
    int len = n ;
    output();
    while(true){
        movechess(len - 1, 2*len) ;
        len -- ;
        if(len == 3){
            break;
        }
        movechess(len, 2*len) ;
    }
    string ss;
    for(int i=0 ; i<n-4 ; i++){
        ss += "o*" ;
    }
    for(int i=0 ; i<4 ; i++){
        cout << out[i] << ss << endl ;
    }
    return 0 ;
}