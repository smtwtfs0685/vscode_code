#include <iostream>
#include <cstring>
using namespace std;

const int N=1e5;
char a[N],b[N];
int a1[N],b1[N],c[N];

int main(){
    cin >> a >> b ;
    int l1=strlen(a),l2=strlen(b);
    for(int i=1 ; i<=l1 ; i++) a1[i] = a[l1-i] - '0' ;
    for(int i=1 ; i<=l2 ; i++) b1[i] = b[l2-i] - '0' ;
    for(int i=1 ; i<=l1 ; i++){
        for(int j=1 ; j<=l2 ; j++){
            c[i+j-1] += a1[i]*b1[j] ; 
        }
    }
    for(int i=1 ; i<=l1+l2 ; i++){
        if(c[i]>9){
            c[i+1] += c[i]/10 ;
            c[i] %= 10; 
        }
    }
    int lx=l1+l2;
    while(c[lx]==0 && lx>1) lx-- ;
    for(int i=lx ; i>=1 ; i--) cout << c[i] ;
    return 0;
}